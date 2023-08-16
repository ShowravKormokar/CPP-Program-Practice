// Code By : Sagar Gupta //
#include <conio.h>  // Include the conio.h library
#include <cstdio>   // Include the cstdio library
#include <iostream> // Include the iostream library
#include <string.h> // Include the string.h library
#include <cstdlib>  // Include the cstdlib library

using namespace std; // Specifying namespace std

static int p = 0; // Initializing static variable p with value 0
class a           // Defining a class
{                 // Class body

} // Class body

bus[10];            // Defining global array
void vline(char ch) // Defining function vline with parameter ch
{                   // Function body

} // Function body

void a::install() // Defining function install
{                 // Function body

} // Function body

void a::allotment() // Defining function allotment
{                   // Function body
    int seat;
    char number[5];
top:

    cout << "Bus no: "; // Print message on console
    cin >> number;      // Take input from user
    int n;
    for (n = 0; n <= p; n++)
    {

        if (strcmp(bus[n].busn, number) == 0)
            break;
    }

    while (n <= p)
    {
        cout << "\nSeat Number: "; // Print message on console
        cin >> seat;               // Take input from user

        if (seat > 32)
        {
            cout << "\nThere are only 32 seats available in this bus."; // Print message on console
        }

        else
        {
            if (strcmp(bus[n].seat[seat / 4][(seat % 4) - 1], "Empty") == 0)
            {
                cout << "Enter passanger's name: ";           // Print message on console
                cin >> bus[n].seat[seat / 4][(seat % 4) - 1]; // Take input from user
                break;
            }

            else
                cout << "The seat no. is already reserved.\n"; // Print message on console
        }
    }

    if (n > p)
    {
        cout << "Enter correct bus no.\n"; // Print message on console
        goto top;
    }
}

void a::empty()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            strcpy(bus[p].seat[i][j], "Empty"); // Copy the string "Empty" to bus[p].seat[i][j]
        }
    }
}

void a::show()
{
    int n;
    char number[5];

    cout << "Enter bus no: "; // Print message on console
    cin >> number;            // Take input from user

    for (n = 0; n <= p; n++)
    {
        if (strcmp(bus[n].busn, number) == 0) // Compare bus[n].busn with number
            break;
    }

    while (n <= p)
    {
        vline('*');
        cout << "Bus no: \t" << bus[n].busn                               // Print the bus number
             << "\nDriver: \t" << bus[n].driver << "\t\tArrival time: \t" // Print the name of driver, arrival time
             << bus[n].arrival << "\tDeparture time:" << bus[n].depart
             << "\nFrom: \t\t" << bus[n].from << "\t\tTo: \t\t" << bus[n].to << "\n"; // Print from and to destinations
        vline('*');
        bus[0].position(n); // position(n) function of class bus

        int a = 1;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                a++;
                if (strcmp(bus[n].seat[i][j], "Empty") != 0) // Compare the seat is empty or not
                    cout << "\nThe seat no " << (a - 1) << " is reserved for " << bus[n].seat[i][j] << ".";
            }
        }
        break;
    }

    if (n > p)

        cout << "Enter correct bus no: "; // Print message on console
}

void a::position(int l) // Defining function "position"
{
    int s = 0; // Initialize "s" with value 0
    p = 0;     // Initialize "p" with value 0

    for (int i = 0; i < 8; i++) // iterate from 0 to 8
    {
        cout << "\n"; // Print a newline on console

        for (int j = 0; j < 4; j++) // iterate from 0 to 4
        {
            s++; // Increment the value of "s"

            if (strcmp(bus[l].seat[i][j], "Empty") == 0) // check if seat is empty or not
            {
                cout.width(5);             // Set the width of next cout statement
                cout.fill(' ');            // Fill space in case of empty value
                cout << s << ".";          // print the value of s and "."
                cout.width(10);            // Set the width of next cout statement
                cout.fill(' ');            // Fill space in case of empty value
                cout << bus[l].seat[i][j]; // print the value of seat
                p++;                       // Increment the value of "p"
            }

            else // else body
            {
                cout.width(5);             // Set the width of next cout statement
                cout.fill(' ');            // Fill space in case of empty value
                cout << s << ".";          // print the value of s and "."
                cout.width(10);            // Set the width of next cout statement
                cout.fill(' ');            // Fill space in case of empty value
                cout << bus[l].seat[i][j]; // print the value of seat
            }
        }
    }

    cout << "\n\nThere are " << p << " seats empty in Bus No: " << bus[l].busn; // Print the number of empty seats in bus
}

void a::avail() // Defining function "avail"
{
    for (int n = 0; n < p; n++) // iterate from 0 to "p"
    {
        vline('*'); // print vline of character *

        cout << "Bus no: \t" << bus[n].busn << "\nDriver: \t" << bus[n].driver     // print the bus number and driver name
             << "\t\tArrival time: \t" << bus[n].arrival << "\tDeparture Time: \t" // print arrival and departure time
             << bus[n].depart << "\nFrom: \t\t" << bus[n].from << "\t\tTo: \t\t\t" // print "From" and "To" data
             << bus[n].to << "\n";

        vline('*'); // print vline of character *
        vline('_'); // print vline of character _
    }
}

int main()
{

    system("cls"); // Clear the console
    int w;         // Initialize variable
    while (1)
    {

        // system("cls");

        cout << "\n\n\n\n\n";             // Print message on console
        cout << "\t\t\t1.Install\n\t\t\t" // Print message on console

             << "2.Reservation\n\t\t\t"       // Print message on console
             << "3.Show\n\t\t\t"              // Print message on console
             << "4.Buses Available. \n\t\t\t" // Print message on console
             << "5.Exit";                     // Print message on console

        cout << "\n\t\t\tEnter your choice:-> "; // Print message on console
        cin >> w;                                // Take input from user

        switch (w)
        {
        case 1:
            bus[p].install(); // call install function
            break;

        case 2:
            bus[p].allotment(); // call allotment function
            break;

        case 3:
            bus[0].show(); // call show function
            break;

        case 4:
            bus[0].avail(); // call avail function
            break;

        case 5:
            exit(0); // Exit the program
        }
    }

    return 0;
}
