#include <iostream>
using namespace std;

int main()
{
    int n = 9, x = n, y = 2 * n;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < y; j++)
        {
            if (j == x or j == n + i - 1)
            {
                cout << "*";
            }
            else if (j >= x && j <= n + i - 1 and i == n / 2 + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
        x -= 1;
    }
    return 0;
}