#include <iostream>
using namespace std;

int main()
{
    int a =5;
    int &b = a; // b point or use same memory address of a

    cout<<"a= "<<a<<"\tb= "<<b<<endl;
    ++b;
    cout<<"a= "<<a<<"\tb= "<<b<<endl; // This is the reason 'b' is preincreased to change 'a' value
}