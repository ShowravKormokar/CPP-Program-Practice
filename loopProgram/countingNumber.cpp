#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int num, count = 0;
    cout << "Enter any integer: ";
    cin >> num;

    while (num != 0)
    {
        num /= 10;
        count++;
    }
    cout << "Total number of digits " << count << endl;
}