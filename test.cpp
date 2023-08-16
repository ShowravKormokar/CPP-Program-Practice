#include <iostream>

class InvalidPasswordException : public std::exception
{
private:
    std::string error_;

public:
    InvalidPasswordException(const std::string &error) : error_(error) {}

    const char *what() const noexcept override
    {
        return error_.c_str();
    }
};

bool hasLowerCase(const std::string &password)
{
    for (char ch : password)
    {
        if (ch >= 'a' && ch <= 'z')
            return true;
    }
    return false;
}

bool hasUpperCase(const std::string &password)
{
    for (char ch : password)
    {
        if (ch >= 'A' && ch <= 'Z')
            return true;
    }
    return false;
}

bool hasDigit(const std::string &password)
{
    for (char ch : password)
    {
        if (ch >= '0' && ch <= '9')
            return true;
    }
    return false;
}

bool hasSpecialCharacter(const std::string &password)
{
    const char specialChars[] = "!@#$%^&*()_+-={}[]|;:,.<>?";

    for (char ch : password)
    {
        for (char specialChar : specialChars)
        {
            if (ch == specialChar)
                return true;
        }
    }
    return false;
}

void validatePassword(const std::string &password)
{
    std::string error;

    if (password.length() < 8)
        error += "Password should have at least 8 characters. ";

    if (!hasLowerCase(password))
        error += "Password should have at least 1 lowercase character. ";

    if (!hasUpperCase(password))
        error += "Password should have at least 1 uppercase character. ";

    if (!hasDigit(password))
        error += "Password should have at least 1 digit. ";

    if (!hasSpecialCharacter(password))
        error += "Password should have at least 1 special character. ";

    if (!error.empty())
        throw InvalidPasswordException(error);
}

int main()
{
    std::string username, password;

    std::cout << "Enter username: ";
    std::cin >> username;

    std::cout << "Enter password: ";
    std::cin >> password;

    try
    {
        validatePassword(password);

        std::cout << "Username: " << username << std::endl;
        std::cout << "Password: " << password << std::endl;
    }
    catch (const InvalidPasswordException &ex)
    {
        std::cout << "Invalid password exception caught: " << ex.what() << std::endl;
    }

    return 0;
}
