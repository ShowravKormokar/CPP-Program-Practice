/*
#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    //     1
    //   1 2
    // 1 2 3
    int i, j, k, n;
    cout << "Enter any number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << k;
        }
        cout << endl;
    }
}
*/
/*#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    //     A
    //   B B
    // C C C
    int i, j, k, n;
    cout << "Enter any number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << char('A' + i - 1);
        }
        cout << endl;
    }
}*/
/*#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    //     C
    //   B B
    // A A A
    int i, j, k, n;
    cout << "Enter any number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << char('A' + j - 1);
        }
        cout << endl;
    }
}*/
#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    //       A
    //     A B
    //   A B C
    // A B C D
    int i, j, k, n;
    cout << "Enter any number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            // cout << "*";
            cout << char('A' + k - 1);
        }
        cout << endl;
    }
}