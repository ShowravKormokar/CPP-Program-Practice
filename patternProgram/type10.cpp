#include <iostream>
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
}