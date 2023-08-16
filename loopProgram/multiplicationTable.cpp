#include <iostream>
#include <cmath>
using namespace std;
main()
{
    // Multiplication table or time table
    //  Formula: num x i = num*i
    int num;
    cout << "Enter any integer value: ";
    cin >> num;

    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x "
             << "= " << (num * i) << endl;
    }
    return 0;
}