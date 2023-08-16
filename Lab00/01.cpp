#include <iostream>
using namespace std;

class alpha
{
    int x;

public:
    alpha(int i)
    {
        x = i;
        cout << "Alpha initialized.\n";
    }
    void show_x()
    {
        cout << "x= " << x << endl;
    }
};
class beta
{
    float y;

public:
    beta(float j)
    {
        y = j;
        cout << "Beta initialized.\n";
    }
    void show_y()
    {
        cout << "y= " << y << endl;
    }
};
class gama : public beta,public alpha
{
    int m, n;

public:
    gama(int a, float b, int c, int d) : alpha(a), beta(b)
    {
        m = c;
        n = d;
        cout << "Gama initialized.\n";
    }
    void show_mn()
    {
        cout << "m= " << m << endl
             << "n= " << n << endl;
    }
};

int main()
{
    gama g(5, 10.75, 20, 30);
    cout << "\n";
    g.show_x();
    g.show_y();
    g.show_mn();
}