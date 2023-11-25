#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a; // pointer
    int **q = &p; // Pointer to pointer | Hold a value of a

    cout << "a= " << a << endl;    // Value of a
    cout << "&a= " << &a << endl; // Hold address of a
    cout << "p= " << p << endl;    // Hold address of a
    cout << "*p= " << *p << endl;  // Hold value of a
    cout << "&p= " << &p << endl   // Hold address of p
         << endl;

    cout << "q= " << q << endl;     // Hold address of p
    cout << "*q= " << *q << endl;   // Hold address of a
    cout << "**q= " << **q << endl; // Hold value of a
    cout << "&q= " << &q << endl;   // Hold address of q (itself)
}