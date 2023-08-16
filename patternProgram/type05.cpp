/*#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    // 1 2 3
    //   1 2
    //     1
    int i, j, k, n;
    cout << "Enter any number: ";
    cin >> n;

    for (i = n; i >= 1; i--)
    {
        for (j = i; j < n; j++)
        {
            cout << " ";
        }
        for (k = 1; k <=i; k++)
        {
            cout << k;
        }
        cout << endl;
    }
}*/
/*#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    // 3 3 3
    //   2 2
    //     1
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
            cout << i;
        }
        cout << endl;
    }
}*/
/*#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    // 1 0 1
    //   1 0
    //     1
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
            cout << k % 2;
        }
        cout << endl;
    }
}*/
/*#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    // C C C
    //   B B
    //     A
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
            cout << char('A' + i - 1);
        }
        cout << endl;
    }
}*/
#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    // A B C
    //   A B
    //     A
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
            cout << char('A' + k - 1);
        }
        cout << endl;
    }
}