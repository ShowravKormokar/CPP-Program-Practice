/*#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    //     *
    //    * *
    //   * * *
    //    * *
    //     *
    int i, j, k, n;
    cout << "Enter any number: ";
    cin >> n;

    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (i = n; i >= 1; i--)
    {
        for (j = i; j < n; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}*/
/*#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    //     1
    //    2 2
    //   3 3 3
    //    2 2
    //     1
    int i, j, k, n;
    cout << "Enter any number: ";
    cin >> n;

    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    for (i = n; i >= 1; i--)
    {
        for (j = i; j < n; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}*/
/*#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    //     A
    //    B B
    //   C C C
    //    B B
    //     A
    int i, j, k, n;
    cout << "Enter any number: ";
    cin >> n;

    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << char('A' + i - 1) << " ";
        }
        cout << endl;
    }
    for (i = n; i >= 1; i--)
    {
        for (j = i; j < n; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << char('A' + i - 1) << " ";
        }
        cout << endl;
    }
}*/
#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    //     A
    //    A B
    //   A B C
    //    A B
    //     A
    int i, j, k, n;
    cout << "Enter any number: ";
    cin >> n;

    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << char('A' + k - 1) << " ";
        }
        cout << endl;
    }
    for (i = n; i >= 1; i--)
    {
        for (j = i; j < n; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << char('A' + k - 1) << " ";
        }
        cout << endl;
    }
}