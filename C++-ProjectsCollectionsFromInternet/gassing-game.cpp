#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int guessNumber, randomNumber;

    while (1)
    {
        cout << "Enter your guess between 1 to 5: ";
        cin >> guessNumber;

        randomNumber = rand() % 5 + 1;
        (guessNumber == randomNumber) ? cout << "You have won." << endl
                                             << endl
                                      : cout << "You have lost. Try again." << endl
                                             << "Random number was: " << randomNumber << endl
                                             << endl;
        
        
    }
}