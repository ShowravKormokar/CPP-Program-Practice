/*#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    // 1
    // 1 2
    // 1 2 3
    // 1 2
    // 1
    int i, j, n;
    cout << "Enter the value: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j < i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}*/
/*
#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    // 1
    // 2 2
    // 3 3 3
    // 2 2
    // 1
    int i, j, n;
    cout << "Enter the value: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
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
    // A
    // B B
    // C C C
    // B B
    // A
    int i, j, n;
    char alp = 'A';
    cout << "Enter the value: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << char(alp + i - 1) << " ";
        }
        cout << endl;
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << char(alp + i - 1) << " ";
        }
        cout << endl;
    }
}*/
#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    // A
    // A B
    // A B C
    // A B
    // A
    int i, j, n;
    char alp = 'A';
    cout << "Enter the value: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << char(alp + j - 1) << " ";
        }
        cout << endl;
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << char(alp + j - 1) << " ";
        }
        cout << endl;
    }
}