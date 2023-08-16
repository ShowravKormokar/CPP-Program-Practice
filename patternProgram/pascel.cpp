
//****** techcrashcourse.com*********//

/*#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    //     1
    //    121
    //   12321
    //  1234321
    // 123454321
    int i, j, k, n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}*/
/*#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    // 1234321
    //  12321
    //   121
    //    1
    int i, j, k, n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}*/

/*#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    //    1
    //   121
    //  12321
    // 1234321
    //123454321
    // 1234321
    //  12321
    //   121
    //    1
    int i, j, k, n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}*/

#include <iostream>
using namespace std;

int main()
{
    int numRows;
    cout << "Enter the number of rows to print: ";
    cin >> numRows;

    int triangle[numRows][numRows];

    // Fill in the values of the first two rows
    triangle[0][0] = 1;
    triangle[1][0] = 1;
    triangle[1][1] = 1;

    // Fill in the remaining rows of the triangle
    for (int i = 2; i < numRows; i++)
    {
        triangle[i][0] = 1;
        for (int j = 1; j <= i; j++)
        {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    // Print the triangle
    for (int i = 0; i < numRows; i++)
    {
        // Print space
        for (int j = 1; j <= numRows - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
