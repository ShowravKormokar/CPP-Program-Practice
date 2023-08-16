// #include <iostream>
// #include <cstring>

// using namespace std;
// int main()
// {
//     int id;
//     char sec;
//     string name, sem, dept;

//     cout << "Enter your id: " << endl;
//     cin >> id;

//     cout << "Enter your name: " << endl;
//     getline(cin, name);

//     cout << "Enter your semester: " << endl;
//     cin >> sem;

//     cout << "Enter your section: " << endl;
//     cin >> sec;

//     cout << "Enter your dept. name: " << endl;
//     getline(cin, dept);

//     cout << "ID: " << id << endl
//          << "Name: " << name << endl
//          << "Semester: " << sem << endl
//          << "Section: " << sec << endl
//          << "Dept. Name: " << dept << endl;

//     return 0;
// }

// #include <iostream>
// #include <cstring>

// using namespace std;

// class car
// {
// private:
//     string brand, model;
//     int year;

// public:
//     void in()
//     {
//         cout << "enter the brand: ";
//         getline(cin, brand);
//         cout << "enter the car model: ";
//         cin >> model;
//         cout << "enter the year: ";
//         cin >> year;
//     }
//     void ou()
//     {
//         cout << "Brand: " << brand << endl
//              << "Model: " << model << endl
//              << "Year: " << year << endl;
//     }
// };

// int main()
// {
//     car de1, de2;

//     de1.in();
//     de1.ou();

// }

// #include <iostream>
// #include <cmath>

// using namespace std;

// class traiangle
// {
// private:
//     double a, b, h;

// public:
//     void in()
//     {
//         cin >> a >> b >> h;
//     }
//     void calc()
//     {
//         cout << "Area: " << (0.5 * b * h) << endl
//              << "Parameter: " << (a + b + h) << endl;
//     }
// };

// int main()
// {
//     traiangle t1;

//     t1.in();
//     t1.calc();
// }

#include <iostream>
#include <cmath>

using namespace std;

class temperature
{
private:
    double C, F;

public:
    void celtofah()
    {
        cin >> C;
        // cout << (9 * C / 5) + 32;
        cout << (C - 32) * 5 / 9;
    }
};

int main()
{
    temperature temp1;
    temp1.celtofah();
}