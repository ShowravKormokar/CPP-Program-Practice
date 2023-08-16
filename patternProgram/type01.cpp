#include <iostream>
#include <cmath>
using namespace std;
main()
{
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    int i, j, n, sum = 1;
    cout << "Enter a value";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << sum << "\t";
            sum++;
        }
        cout << endl;
    }
    return 0;
}
/*#include <iostream>
#include <cmath>
using namespace std;
main()
{
    /*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

int i, j, n;
cout << "Enter a value";
cin >> n;

for (i = 1; i <= n; i++)
{
    for (j = 1; j <= i; j++)
    {
        cout << " " << j;
    }
    cout << endl;
}
return 0;
}
*/
/*
#include <iostream>
#include <cmath>
using namespace std;
main()
{
    /*
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5

    int i, j, n;
    cout << "Enter a value";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << " " << i;
        }
        cout << endl;
    }
    return 0;
}*/
/*
#include <iostream>
#include <cmath>
using namespace std;
main()
{
    /*
    1
    1 0
    1 0 1
    1 0 1 0
    1 0 1 0 1

    int i, j, n;
    cout << "Enter a value";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << " " << j % 2;
        }
        cout << endl;
    }
    return 0;
}*/
/*
#include <iostream>
#include <cmath>
using namespace std;
main()
{
    /*
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5

    int i, j, n;
    cout << "Enter a value";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << " " << i % 2;
        }
        cout << endl;
    }
    return 0;
}*/
/*
#include <iostream>
#include <cmath>
using namespace std;
main()
{
    /*
    A
    B B
    C C C
    D D D D
    E E E E E

    int i, j, n;
    char alp = 'A';
    cout << "Enter a value";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << alp << " ";
        }
        alp++;
        cout << endl;
    }
    return 0;
}*/
/*
#include <iostream>
#include <cmath>
using namespace std;
main()
{
    /*
    A
    B C
    D E F
    G H I J
    K L M N O

    int i, j, n;
    char alp = 'A';
    cout << "Enter a value";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << alp << " ";
            alp++;
        }
        cout << endl;
    }
    return 0;
}*/
/*#include <iostream>
#include <cmath>
using namespace std;
main()
{

   //A
   //B B
   //C C C
   //D D D D
   //E E E E E

   int i, j, n;
   char alp = 'A';
   cout << "Enter a value";
   cin >> n;

   for (i = 1; i <= n; i++)
   {
       for (j = 1; j <= i; j++)
       {
           cout << alp << " ";
       }
       cout << endl;
   }
   return 0;
}*/
/*
#include <iostream>
#include <cmath>
using namespace std;
main()
{

    // A
    // A B
    // A B C
    // A B C D
    // A B C D E

    int i, j, n;
    char alp = 'A';
    cout << "Enter a value";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << char(alp + j - 1) << " ";
        }
        cout << endl;
    }
    return 0;
}*/