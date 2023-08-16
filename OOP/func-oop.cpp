/*#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

class Cars
{
private:
    string name;
    int power;

public:
    void CarInput()
    {
        cout << "Enter the name of the car and his power : ";
        cin >> name >> power;
    }
    void CarOutput()
    {
        cout << "<------------- Details ------------->" << endl
             << "\tName\t"
             << "\tPower\t" << endl
             << "\t" << name << "\t\t" << power << endl;
    }
};

int main()
{
    Cars car1;

    car1.CarInput();
    car1.CarOutput();

    return 0;
}*/

#include <iostream>
#include <conio.h>

using namespace std;

class Arith
{
public:
    int Sum(double a, double b)
    {
        return (a + b);
    }
    int Sub(double a, double b)
    {
        return (a - b);
    }
    int Mul(double a, double b)
    {
        return (a * b);
    }
    int Div(double a, double b)
    {
        return (a / b);
    }
    bool Pos(double a)
    {
        // (a >= 0) ? return true : return false;
        if (a >= 0)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Arith m1;
    int a, b;
    cout << "Enter the value of a and b : ";
    cin >> a >> b;

    // Call the function
    cout << "Sum = " << m1.Sum(a, b) << endl;
    cout << "Sub = " << m1.Sub(a, b) << endl;
    cout << "Mul = " << m1.Mul(a, b) << endl;
    cout << "Div = " << m1.Div(a, b) << endl;
    cout << "Positive = " << m1.Pos(a) << endl;
}