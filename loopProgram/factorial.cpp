#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int i, num, fac = 1;
    cout << "Enter any integer value: ";
    cin >> num;

    for (i = 1; i <= num; i++)
    {
        fac = (fac * i);
    }
    cout << fac;
    return 0;
}