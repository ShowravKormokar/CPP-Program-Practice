#include <iostream>
using namespace std;

int main()
{
    cout << "Hello! I am Showrav." << endl;

    // Figure- 1
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            if ((i == 1) && (j > 0 && j < 11) || (i > 1 && i < 9) && (j == 1 || j == 10))
                cout << "#";
            else if ((i == 2) && (j == 3 || j == 7) || (i == 4) && (j == 3 || j == 7) || (i == 6) && (j == 3 || j == 7) || (i == 8) && (j == 5))
                cout << "[";
            else if ((i == 2) && (j == 4 || j == 8) || (i == 4) && (j == 4 || j == 8) || (i == 6) && (j == 4 || j == 8) || (i == 8) && (j == 6))
                cout << "]";
            else if ((i == 9) && (j > 1 && j < 10))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << "_________________________________________" << endl
         << endl;

    // figure- 2
    for (int i = 1; i < 13; i++)
    {
        for (int j = 1; j < 18; j++)
        {
            if ((i == 1) && (j > 4 && j < 17) || (i == 5 || i == 9) && (j > 0 && j < 13) || (i > 1 && i < 10) && (j == 17) || (i > 5 && i < 13) && (j == 1 || j == 12) || (i == 2) && (j == 4 || j == 16) || (i == 3) && (j == 3 || j == 15) ||
                (i == 4) && (j == 2 || j == 14) || (i == 8) && (j == 14) || (i == 7) && (j == 15) || (i == 6) && (j == 16))
            {
                cout << "#";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << "\n";
}