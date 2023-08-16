#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int num, temp, r, sum = 0;
    cout << "Enter any number: ";
    cin >> num;

    temp = num;

    for (int i = 1; i <= num; i++)
    {
        r = temp % 10;
        sum += r;
        temp = temp / 10;
    }
    cout << "Sum of digits : " << sum;
    return 0;
}