#include <iostream>
using namespace std;

int getStringLength(string pass)
{
    int length = 0;
    while (pass[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    string username, password;
    int u = 0, l = 0, d = 0, s = 0;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;
    int i = 0;
    while (password[i] != '\0')
    {
        if (password[i] >= 'A' && password[i] <= 'Z')
        {
            u++;
        }
        else if (password[i] >= 'a' && password[i] <= 'z')
        {
            l++;
        }
        else if (password[i] >= '0' && password[i] <= '9')
        {
            d++;
        }
        else
        {
            s++;
        }
        i++;
    }

    try
    {
        if (getStringLength(password) < 8 || u == 0 || l == 0 || d == 0 || s == 0)
        {
            throw 1;
        }
        cout << "This is valid password: " << password << endl;
    }

    catch (...)
    {
        if (getStringLength(password) < 8)
            cout << "At least 8 characters.\n";
        if (u == 0)
            cout << "No uppercase character found.\n";
        if (l == 0)
            cout << "No lowercase character found.\n";
        if (d == 0)
            cout << "No disit found.\n";
        if (s == 0)
            cout << "No special character found.\n";
        cout << "Not valid password.\n";
    }
}