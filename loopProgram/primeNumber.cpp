#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
main()
{
    int i, num, count = 0;
    cout << "Enter any integer number: ";
    cin >> num;

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            count++;
            break;
        }
    }
    (count == 0) ? cout << "Prime" : cout << "Not prime";
    return 0;
}