/*#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    // * * * * *
    // *       *
    // *       *
    // *       *
    // * * * * *
    int i, j, k, n;
    cout << "Enter any number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            (i == 1 || i == n || j == 1 || j == n) ? cout << "*" : cout << " ";
        }
        cout << endl;
    }
}*/
/*#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    // *
    // * *
    // *   *
    // *     *
    // * * * * *
    int i, j, k, n;
    cout << "Enter any number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            (i == n || j == 1 || i == j) ? cout << "*" : cout << " ";
        }
        cout << endl;
    }
}*/
#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    // *       *
    //   *   *
    //     *
    //   *   *
    // *       *
    int i, j, k, n;
    cout << "Enter any number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            (i == j || i + j == n + 1) ? cout << "*" : cout << " ";
        }
        cout << endl;
    }
}