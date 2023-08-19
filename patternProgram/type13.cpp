#include <iostream>
using namespace std;

int main()
{
    system("COLOR fc");
    int size(9), border(1);

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            if (j == border or j == size - border + 1 or i == 1 or i == size)
                cout << "* ";
            else
                cout << "  ";
        }
        if (i <= size / 2)
            border += 1;
        else
            border += 1;
        cout << "\n";
    }
    return 0;
}