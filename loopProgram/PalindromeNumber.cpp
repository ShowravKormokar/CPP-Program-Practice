#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int num, temp, r, sum = 0;
    cout << "Enter any number: ";
    cin >> num;

    temp = num;
    // while (temp != 0)
    for (int i = 1; temp != 0; i++)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }
    (num == sum) ? cout << "Palindrome Number" : cout << "Not Palindrome Number";
    return 0;
}