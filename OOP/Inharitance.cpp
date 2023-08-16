#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    void person_input()
    {
        cout << "Enter the name: ";
        // getline(cin, name);
        // cin.ignore();
        cin >> name;
        cout << "Enter the age: ";
        cin >> age;
    }
    void person_output()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

class Student : public Person
{
private:
    int id;

public:
    void student_input()
    {
        cout << "Enter the id: ";
        cin >> id;
        person_input();
    }
    void student_output()
    {
        cout << "ID : " << id << endl;
        person_output();
    }
};

int main()
{
    Student s1;
    Person p1;

    cout << "Input Students Details" << endl;
    s1.student_input();
    cout << "Input Person Details" << endl;
    p1.person_input();

    cout << endl
         << "Show student details" << endl;
    s1.student_output();
    cout << endl
         << "Show person details" << endl;
    p1.person_output();

    return 0;
}