/*#include <iostream>
//#include <conio.h>
using namespace std;
main()
{
    int n, sum = 0;
    cout << "Enter the number of students : ";
    cin >> n;

    int students[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Marks for student " << i + 1 << " = ";
        cin >> students[i];
        sum += students[i];
    }
    cout << "Total marks : " << sum << endl;
    cout << "Average : " << float(float(sum) / n) << endl;

    // Maximum or Minimum
    int max = students[0];
    int min = students[0];
    for (int i = 1; i < n; i++)
    {
        if (max < students[i])
        {
            max = students[i];
        }
        if (min > students[i])
        {
            min = students[i];
        }
    }
    cout << "Maximum marks = " << max << endl;
    cout << "Minimum marks = " << min << endl;
}*/

#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>
using namespace std;
struct studentsResults
{

    int ID;
    float CGPA;
} stu;
main()
{
    int i, j, n;
    float temp, temp2;
    ofstream MyFile("myFile.txt");
    ifstream MyReadFile("myInFile.txt");

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