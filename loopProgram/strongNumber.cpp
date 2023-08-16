#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int num, sum = 0, rem, temp, fact;
    cout << "Enter any integer: ";
    cin >> num;

    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        fact = 1;
        for (int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    (sum == num) ? cout << num << " is a strong number." : cout << num << " is not a strong number.";
}