#include <iostream>
using namespace std;

class Password
{
public:
    int uppCase = 0, lowCase = 0, digit = 0, specCharac = 0;
    int PasswordLength(string p);
    void PasswordCheck(string password);
    void validatePassword(string password2);
};

int Password::PasswordLength(string p)
{
    int length = 0;
    while (p[length] != '\0')
    {
        length++;
    }
    return length;
}
void Password::PasswordCheck(string password)
{
    int i = 0;
    while (password[i] != '\0')
    {
        if (password[i] >= 'A' && password[i] <= 'Z')
            uppCase++;
        else if (password[i] >= 'a' && password[i] <= 'z')
            lowCase++;
        else if (password[i] >= '0' && password[i] <= '9')
            digit++;
        else
            specCharac++;
        i++;
    }
}

void Password::validatePassword(string password2)
{
    string error;

    if (PasswordLength(password2) < 8)
        error += "At least 8 characters.";

    if (uppCase == 0)
        error += "\nNo uppercase character found.";

    if (lowCase == 0)
        error += "\nNo lowercase character found.";

    if (digit == 0)
        error += "\nNo digit found.";

    if (specCharac == 0)
        error += "\nNo special character found.";

    if (PasswordLength(error) != 0)
        throw error;
}

int main()
{
    Password pass;
    string username, password;
    cout << "Enter username: ";
    cin >> username;

    while (1)
    {
        cout << "Enter password: ";
        cin >> password;

        pass.PasswordCheck(password);

        try
        {
            pass.validatePassword(password);

            cout << "Congratulation! this is your valid password: " << password << endl;
            break;
        }

        catch (string str)
        {
            cout << str << endl;
            cout << "Not valid. Try again!\n";
        }
    }
}