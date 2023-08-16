/*#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

class MyClass
{                    // The class
public:              // Access specifier
    int myNum;       // Attribute (int variable)
    string myString; // Attribute (string variable)
};

int main()
{
    MyClass myObj; // Create an object of MyClass

    // Access attributes and set values
    myObj.myNum = 15;
    myObj.myString = "Some text";

    // Print attribute values
    cout << myObj.myNum << "\n";
    cout << myObj.myString;
    return 0;
}*/
#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>
using namespace std;
class studentsResults
{
public:
    int ID;
    float CGPA;
};
main()
{
    int i, j, n;
    float temp, temp2;
    ofstream MyFile("outputFile.txt");    // Output File
    ifstream MyReadFile("inputFile.txt"); // Input File

    cout << "Enter the number of students : ";
    MyReadFile >> n;

    studentsResults stu[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Sl No. " << i + 1 << endl;

        cout << "Enter the ID : ";
        MyReadFile >> stu[i].ID;
        cout << "Enter the CGPA : ";
        MyReadFile >> stu[i].CGPA;
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (stu[i].CGPA < stu[j].CGPA)
            {
                temp = stu[i].CGPA;
                temp2 = stu[i].ID;
                stu[i].ID = stu[j].ID;
                stu[i].CGPA = stu[j].CGPA;
                stu[j].CGPA = temp;
                stu[j].ID = temp2;
            }
        }

        MyFile << "Marit Position : " << i + 1 << endl
               << "ID : " << stu[i].ID << endl
               << "CGPA : " << stu[i].CGPA << endl;
    }
    cout << "***\tMarit Position List\t***" << endl
         << "Check myFile.txt";
    MyFile.close();
}
/*#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

// Create a Car class with some attributes
class Car
{
public:
    string brand;
    string model;
    int year;
};

int main()
{
    // Create an object of Car
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    // Create another object of Car
    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;
    int i, j, n;

    cout << "Enter the car number : ";
    cin >> n;
    Car carDtls[n];

    for (i = 0; i < n; i++)
    {
        cout << "Enter the brand name : ";
        getline(cin, carDtls[i].brand);
        cout << "Enter the model : ";
        getline(cin, carDtls[i].model);
        cout << "Enter the lounch year : ";
        cin >> carDtls[i].year;
    }
    // Print attribute values
    cout << "Brand"
         << "\t "
         << "Model"
         << "\t "
         << "Lounch Year"
         << "\n";
    for (i = 0; i < n; i++)
    {
        cout << carDtls[i].brand << "\t " << carDtls[i].model << "\t " << carDtls[i].year << "\n";
    }
    return 0;
}*/

/*#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

class Car
{
public:
    string brand;
    string model;
    int year;
};

main()
{

    int i, j, n;

    cout << "Enter the cat number : ";
    cin >> n;
    int m = n;

    Car carDtls[n][m];
    // cout << "Enter the car details :" << endl;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= m; j++)
        {
            cout << "Enter the brand name : ";
            // getline(cin, carDtls[i][j].brand);
            cin >> carDtls[i][j].brand;
            // getline(cin, carDtls[i][j].model);
        }
        for (j = 0; j <= m; j++)
        {
            cout << "Enter the model : ";
            cin >> carDtls[i][j].model;
        }
        for (j = 0; j <= m; j++)
        {
            cout << "Enter the lounch year : ";
            cin >> carDtls[i][j].year;
        }
    }

    cout << "******Show the chart*****" << endl;
    cout << "Brand"
         << "\t "
         << "Model"
         << "\t "
         << "Lounch Year"
         << "\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= m; j++)
        {
            cout << carDtls[i][j].brand << "\t " << carDtls[i][j].model << carDtls[i][j].year << "\n";
        }
        cout << endl;
    }
}*/