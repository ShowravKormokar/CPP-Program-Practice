/*#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    //     1
    //    1 2
    //   1 2 3
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
            cout << k << " ";
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
    //  C C C
    //   B B
    //    A
    int i, j, k, n;
    cout << "Enter any number: ";
    cin >> n;

    for (i = n; i >= 1; i--)
    {
        for (j = i; j < n; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << char('A' + i - 1)<<" ";
        }
        cout << endl;
    }
}*/
#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    //  3 3 3
    //   2 2
    //    1
    int i, j, k, n;
    cout << "Enter any number: ";
    cin >> n;

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
}