#include <iostream>
#include <conio.h>
#include <dos.h>
#include <windows.h>
#include <time.h>

// Select display area
#define SCREEN_WIDTH 90
#define SCREEN_HEIGHT 26
#define WIN_WIDTH 70

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int enemyY[3];
int enemyX[3];
int enemyFlag[3];
char car[4][4] = {' ', '#', '#', ' ',
                  '#', '#', '#', '#',
                  ' ', '#', '#', ' ',
                  '#', '#', '#', '#'};

int carPos = WIN_WIDTH / 2;
int score = 0;

void gotoxy(int x, int y)
{
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}
void setcursor(bool visible, DWORD size)
{
    if (size == 0)
        size = 20;

    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = size;
    SetConsoleCursorInfo(console, &lpCursor);
}
void drawBorder()
{
    for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        for (int j = 0; j < 17; j++)
        {
            gotoxy(0 + j, i);
            cout << "#";
            gotoxy(WIN_WIDTH - j, i);
            cout << "#";
        }
    }
    for (int i = 0; i < SCREEN_HEIGHT; i++)
    {
        gotoxy(SCREEN_WIDTH, i);
        cout << "#";
    }
}
void genEnemy(int ind)
{
    enemyX[ind] = 17 + rand() % (33);
}
void drawEnemy(int ind)
{
    if (enemyFlag[ind] == true)
    {
        gotoxy(enemyX[ind], enemyY[ind]);
        cout << "****";
        gotoxy(enemyX[ind], enemyY[ind] + 1);
        cout << " ** ";
        gotoxy(enemyX[ind], enemyY[ind] + 2);
        cout << "****";
        gotoxy(enemyX[ind], enemyY[ind] + 3);
        cout << " ** ";
    }
}
void eraseEnemy(int ind)
{
    if (enemyFlag[ind] == true)
    {
        gotoxy(enemyX[ind], enemyY[ind]);
        cout << "    ";
        gotoxy(enemyX[ind], enemyY[ind] + 1);
        cout << "    ";
        gotoxy(enemyX[ind], enemyY[ind] + 2);
        cout << "    ";
        gotoxy(enemyX[ind], enemyY[ind] + 3);
        cout << "    ";
    }
}
void resetEnemy(int ind)
{
    eraseEnemy(ind);
    enemyY[ind] = 1;
    genEnemy(ind);
}

void drawCar()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            gotoxy(j + carPos, i + 22);
            cout << car[i][j];
        }
    }
}
void eraseCar()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            gotoxy(j + carPos, i + 22);
            cout << " ";
        }
    }
}

int collision()
{
    if (enemyY[0] + 4 >= 23)
    {
        if (enemyX[0] + 4 - carPos >= 0 && enemyX[0] + 4 - carPos < 9)
        {
            return 1;
        }
    }
    return 0;
}
void gameover()
{
    system("cls");
    cout << endl;
    cout << "\t\t--------------------------" << endl;
    cout << "\t\t-------- Game Over -------" << endl;
    cout << "\t\t--------------------------" << endl
         << endl;
    cout << "\t\tPress any key to go back to menu.";
    getch();
}
void updateScore()
{
    gotoxy(WIN_WIDTH + 7, 5);
    cout << "Score: " << score << endl;
}

void instructions()
{

    system("cls");
    cout << "Instructions";
    cout << "\n----------------";
    cout << "\n Avoid Cars by moving left or right. ";
    cout << "\n\n Press 'a' to move left";
    cout << "\n Press 'd' to move right";
    cout << "\n Press 'escape' to exit";
    cout << "\n\nPress any key to go back to menu";
    getch();
}

void play()
{
    carPos = -1 + WIN_WIDTH / 2;
    score = 0;
    enemyFlag[0] = 1;
    enemyFlag[1] = 0;
    enemyY[0] = enemyY[1] = 1;

    system("cls");
    drawBorder();
    updateScore();
    genEnemy(0);
    genEnemy(1);

    gotoxy(WIN_WIDTH + 7, 2);
    cout << "Car Game";
    gotoxy(WIN_WIDTH + 6, 4);
    cout << "----------";
    gotoxy(WIN_WIDTH + 6, 6);
    cout << "----------";
    gotoxy(WIN_WIDTH + 7, 12);
    cout << "Control ";
    gotoxy(WIN_WIDTH + 7, 13);
    cout << "-------- ";
    gotoxy(WIN_WIDTH + 2, 14);
    cout << " A Key - Left";
    gotoxy(WIN_WIDTH + 2, 15);
    cout << " D Key - Right";

    gotoxy(18, 5);
    cout << "Press any key to start";
    getch();
    gotoxy(18, 5);
    cout << "                      ";

    while (1)
    {
        if (kbhit())
        {
            char ch = getch();
            if (ch == 'a' || ch == 'A')
            {
                if (carPos > 18)
                    carPos -= 4;
            }
            if (ch == 'd' || ch == 'D')
            {
                if (carPos < 50)
                    carPos += 4;
            }
            if (ch == 27)
            {
                break;
            }
        }

        drawCar();
        drawEnemy(0);
        drawEnemy(1);
        if (collision() == 1)
        {
            gameover();
            return;
        }
        Sleep(50);
        eraseCar();
        eraseEnemy(0);
        eraseEnemy(1);

        if (enemyY[0] == 10)
            if (enemyFlag[1] == 0)
                enemyFlag[1] = 1;

        if (enemyFlag[0] == 1)
            enemyY[0] += 1;

        if (enemyFlag[1] == 1)
            enemyY[1] += 1;

        if (enemyY[0] > SCREEN_HEIGHT - 4)
        {
            resetEnemy(0);
            score++;
            updateScore();
        }
        if (enemyY[1] > SCREEN_HEIGHT - 4)
        {
            resetEnemy(1);
            score++;
            updateScore();
        }
    }
}

int main()
{
    setcursor(0, 0);
    srand((unsigned)time(NULL));

    do
    {
        system("cls");
        gotoxy(10, 5);
        cout << " -------------------------- ";
        gotoxy(10, 6);
        cout << " |        Car Game        | ";
        gotoxy(10, 7);
        cout << " --------------------------";
        gotoxy(10, 9);
        cout << "1. Start Game";
        gotoxy(10, 10);
        cout << "2. Instructions";
        gotoxy(10, 11);
        cout << "3. Quit";
        gotoxy(10, 13);
        cout << "Select option: ";
        char op = getche();

        if (op == '1')
            play();
        else if (op == '2')
            instructions();
        else if (op == '3')
            exit(0);

    } while (1);

    return 0;
}

/*

#include <iostream>
#include <conio.h>
#include <dos.h>
#include <windows.h>
#include <time.h>

// Select display area
#define SCREEN_WIDTH 90
#define SCREEN_HEIGHT 26
#define WIN_WIDTH 70

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);    // Get the handle of console
COORD CursorPosition;    // Declare a COORD structure for cursor position

int enemyY[3];
int enemyX[3];
int enemyFlag[3];
char car[4][4] = {' ', '#', '#', ' ',
                  '#', '#', '#', '#',
                  ' ', '#', '#', ' ',
                  '#', '#', '#', '#'};

int carPos = WIN_WIDTH / 2;
int score = 0;

void gotoxy(int x, int y)    // Defining function gotoxy
{
    CursorPosition.X = x;    // Assign value x to CursorPosition.X
    CursorPosition.Y = y;    // Assign value y to CursorPosition.Y
    SetConsoleCursorPosition(console, CursorPosition);    // Set the cursor position
}

{    // Curly bracket is a special character in C++ language
    if (size == 0)    // check if size is 0 or not
        size = 20;    // initialize size with 20

    CONSOLE_CURSOR_INFO lpCursor;    // Declare a structure
    lpCursor.bVisible = visible;    // Declare a structure member
    lpCursor.dwSize = size;    // Declare a structure member
    SetConsoleCursorInfo(console, &lpCursor);    // Call built-in function
}

{
    for (int i = 0; i < SCREEN_HEIGHT; i++)    // Initialize i with 0 and check if i is less than SCREEN_HEIGHT, increment i by 1
    {
        for (int j = 0; j < 17; j++)    // Initialize j with 0 and check if j is less than 17, increment j by 1
        {
            gotoxy(0 + j, i);    // Set the cursor position to (0+j, i)
            cout << "#";    // Print "#" on console
            gotoxy(WIN_WIDTH - j, i);    // Set the cursor position to (WIN_WIDTH-j, i)
            cout << "#";    // Print "#" on console
        }
    }
    for (int i = 0; i < SCREEN_HEIGHT; i++)    // Initialize i with 0 and check if i is less than SCREEN_HEIGHT, increment i by 1
    {
        gotoxy(SCREEN_WIDTH, i);    // Set the cursor position to (SCREEN_WIDTH, i)
        cout << "#";    // Print "#" on console
    }
}

{
    enemyX[ind] = 17 + rand() % (33);    // Initialize enemyX[ind] with value 17 + rand() % (33)
}
void drawEnemy(int ind)    // Define drawEnemy function
{
    if (enemyFlag[ind] == true)    // Check if enemyFlag[ind] is true or false
    {
        gotoxy(enemyX[ind], enemyY[ind]);    // Move the cursor to enemyX[ind], enemyY[ind] position
        cout << "****";    // Print "****" on console
        gotoxy(enemyX[ind], enemyY[ind] + 1);    // Move the cursor to enemyX[ind], enemyY[ind]+1 position
        cout << " ** ";    // Print " ** " on console
        gotoxy(enemyX[ind], enemyY[ind] + 2);    // Move the cursor to enemyX[ind], enemyY[ind]+2 position
        cout << "****";    // Print "****" on console
        gotoxy(enemyX[ind], enemyY[ind] + 3);    // Move the cursor to enemyX[ind], enemyY[ind]+3 position
        cout << " ** ";    // Print " ** " on console
    }
}

{    // beginning of the if body
    if (enemyFlag[ind] == true)    // check if enemyFlag is true
    {
        gotoxy(enemyX[ind], enemyY[ind]);    // print blank spaces to given coordinates
        cout << "    ";
        gotoxy(enemyX[ind], enemyY[ind] + 1);
        cout << "    ";
        gotoxy(enemyX[ind], enemyY[ind] + 2);
        cout << "    ";
        gotoxy(enemyX[ind], enemyY[ind] + 3);
        cout << "    ";
    }
}    // end of the if body

{
    eraseEnemy(ind);    // erase enemy
    enemyY[ind] = 1;    // assign 1 to enemyY index ind
    genEnemy(ind);    // generate enemy at the index ind
}

void drawCar()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            gotoxy(j + carPos, i + 22);
            cout << car[i][j];
        }
    }
}
void eraseCar()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            gotoxy(j + carPos, i + 22);
            cout << " ";
        }
    }
}

int collision()
{
    if (enemyY[0] + 4 >= 23)
    {
        if (enemyX[0] + 4 - carPos >= 0 && enemyX[0] + 4 - carPos < 9)
        {
            return 1;
        }
    }
    return 0;
}
void gameover()
{
    system("cls");
    cout << endl;
    cout << "\t\t--------------------------" << endl;
    cout << "\t\t-------- Game Over -------" << endl;
    cout << "\t\t--------------------------" << endl
         << endl;
    cout << "\t\tPress any key to go back to menu.";
    getch();
}
void updateScore()
{
    gotoxy(WIN_WIDTH + 7, 5);
    cout << "Score: " << score << endl;
}

void instructions()
{

    system("cls");
    cout << "Instructions";
    cout << "\n----------------";
    cout << "\n Avoid Cars by moving left or right. ";
    cout << "\n\n Press 'a' to move left";
    cout << "\n Press 'd' to move right";
    cout << "\n Press 'escape' to exit";
    cout << "\n\nPress any key to go back to menu";
    getch();
}

void play()
{
    carPos = -1 + WIN_WIDTH / 2;    // Initialize the car position
    score = 0;    // Initialize score value to zero
    enemyFlag[0] = 1;    // Initialize enemyFlag index 0 with value 1
    enemyFlag[1] = 0;    // Initialize enemyFlag index 1 with value 0
    enemyY[0] = enemyY[1] = 1;    // Assign value 1 to both enemyY[0] and enemyY[1]

    system("cls");
    drawBorder();    // draw the game border
    updateScore();    // update the score
    genEnemy(0);    // generate the enemy at index 0
    genEnemy(1);    // generate the enemy at index 1

    gotoxy(WIN_WIDTH + 7, 2);
    cout << "Car Game";
    gotoxy(WIN_WIDTH + 6, 4);
    cout << "----------";
    gotoxy(WIN_WIDTH + 6, 6);
    cout << "----------";
    gotoxy(WIN_WIDTH + 7, 12);
    cout << "Control ";
    gotoxy(WIN_WIDTH + 7, 13);
    cout << "-------- ";
    gotoxy(WIN_WIDTH + 2, 14);
    cout << " A Key - Left";
    gotoxy(WIN_WIDTH + 2, 15);
    cout << " D Key - Right";

    gotoxy(18, 5);
    cout << "Press any key to start";
    getch();
    gotoxy(18, 5);
    cout << "

    while (1)
    {
        if (kbhit())
        {
            char ch = getch();
            if (ch == 'a' || ch == 'A')
            {
                if (carPos > 18)
                    carPos -= 4;
            }
            if (ch == 'd' || ch == 'D')
            {
                if (carPos < 50)
                    carPos += 4;
            }
            if (ch == 27)
            {
                break;
            }
        }

drawCar();    // draw car
        drawEnemy(0);    // draw enemy1
        drawEnemy(1);    // draw enemy2
        if (collision() == 1)    // check collision
        {
            gameover();    // gameover
            return;    // return
        }
        Sleep(50);    // sleep for 50 miliseconds
        eraseCar();    // erase car
        eraseEnemy(0);    // erase enemy1
        eraseEnemy(1);    // erase enemy2

        if (enemyY[0] == 10)    // check if enemy1 is at 10th row
            if (enemyFlag[1] == 0)    // check if enemy2 is not moving
                enemyFlag[1] = 1;    // make enemy2 moving

        if (enemyFlag[0] == 1)    // check if enemy1 is moving
            enemyY[0] += 1;    // increment enemy1 y-coordinate by 1

        if (enemyFlag[1] == 1)    // check if enemy2 is moving
            enemyY[1] += 1;    // increment enemy2 y-coordinate by 1

        if (enemyY[0] > SCREEN_HEIGHT - 4)    // check if enemy1 is at last row
        {
            resetEnemy(0);    // reset enemy1
            score++;    // increment the score
            updateScore();    // update score
        }
        if (enemyY[1] > SCREEN_HEIGHT - 4)    // check if enemy2 is at last row
        {
            resetEnemy(1);    // reset enemy2
            score++;    // increment the score
            updateScore();    // update score
        }
    }
}

int main()
{
    setcursor(0, 0);
    srand((unsigned)time(NULL));

    do
    {
        system("cls");
        gotoxy(10, 5);
        cout << " -------------------------- ";
        gotoxy(10, 6);
        cout << " |        Car Game        | ";
        gotoxy(10, 7);
        cout << " --------------------------";
        gotoxy(10, 9);
        cout << "1. Start Game";
        gotoxy(10, 10);
        cout << "2. Instructions";
        gotoxy(10, 11);
        cout << "3. Quit";
        gotoxy(10, 13);
        cout << "Select option: ";
        char op = getche();

        if (op == '1')
            play();
        else if (op == '2')
            instructions();
        else if (op == '3')
            exit(0);

    } while (1);

    return 0;
}
*/