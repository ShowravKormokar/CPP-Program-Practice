#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

const int width = 20;
const int height = 20;

class Snake
{
public:
    Snake(int x, int y) : x(x), y(y) {}
    int x, y;
};

void draw(const std::vector<Snake> &snake, int foodX, int foodY)
{
    system("cls");
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            bool isSnake = false;
            for (const auto &segment : snake)
            {
                if (segment.x == j && segment.y == i)
                {
                    std::cout << 'o';
                    isSnake = true;
                    break;
                }
            }
            if (!isSnake)
            {
                if (j == foodX && i == foodY)
                {
                    std::cout << 'F';
                }
                else
                {
                    std::cout << ' ';
                }
            }
        }
        std::cout << std::endl;
    }
}

int main()
{
    srand(time(0));
    std::vector<Snake> snake = {Snake(width / 2, height / 2)};
    int dx = 1;
    int dy = 0;
    int foodX = rand() % width;
    int foodY = rand() % height;
    while (true)
    {
        Snake head = snake.front();
        int nextX = head.x + dx;
        int nextY = head.y + dy;
        if (nextX < 0 || nextX >= width || nextY < 0 || nextY >= height)
        {
            break;
        }
        for (const auto &segment : snake)
        {
            if (segment.x == nextX && segment.y == nextY)
            {
                break;
            }
        }
        snake.insert(snake.begin(), Snake(nextX, nextY));
        if (nextX != foodX || nextY != foodY)
        {
            snake.pop_back();
        }
        else
        {
            foodX = rand() % width;
            foodY = rand() % height;
        }
        draw(snake, foodX, foodY);
        usleep(100000);
    }
    std::cout << "Game Over" << std::endl;
    return 0;
}

/*
<-------- Procedure of this program-------->
In this code, the Snake class has two member variables x and y which represent the coordinates of each segment of the snake on the grid. The draw function clears the screen and displays the grid, including the snake and the food. The main loop updates the position of the snake, draws the updated state, and then waits for a brief moment. If the snake goes out of bounds or collides with itself, the loop breaks and the "Game Over" message is displayed.
*/