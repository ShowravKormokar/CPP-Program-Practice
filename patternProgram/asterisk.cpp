#include <iostream>
using namespace std;

int main()
{
    int size = 9;
    int rows, cols;

    for (rows = 1; rows <= size; rows++)
    {
        for (cols = 1; cols <= size; cols++)
        {
            if (cols == rows || cols == size - rows + 1 || rows == size / 2 + 1 || cols == size / 2 + 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}