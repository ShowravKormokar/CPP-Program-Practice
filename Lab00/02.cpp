#include <iostream>
using namespace std;

class A
{
public:
    int i;
};
class B : virtual public A
{
public:
    int j;
};
class C : virtual public A
{
public:
    int k;
};
class D : public B, public C
{
public:
    int sum;
};

int main()
{
    D d;
    d.i = 20;
    d.j = 30;
    d.k = 40;

    d.sum = d.i + d.k;
    cout << "i= " << d.i << endl;
    cout << "j= " << d.j << endl;
    cout << "k= " << d.k << endl;
    cout << "sum= " << d.sum << endl;
}
