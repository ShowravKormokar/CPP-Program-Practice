// File management system
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void createFile()
{
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;
    ofstream outfile;
    outfile.open(filename.c_str());
    if (!outfile)
    {
        cout << "Unable to create file." << endl;
        return;
    }
    string content;
    cout << "Enter the content of the file: ";
    cin.ignore();
    getline(cin, content);
    outfile << content;
    outfile.close();
    cout << "File created successfully." << endl;
}

void readFile()
{
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;
    ifstream infile;
    infile.open(filename.c_str());
    if (!infile)
    {
        cout << "Unable to open file." << endl;
        return;
    }
    string content;
    while (getline(infile, content))
    {
        cout << content << endl;
    }
    infile.close();
}

void deleteFile()
{
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;
    if (remove(filename.c_str()) != 0)
    {
        cout << "Unable to delete file." << endl;
    }
    else
    {
        cout << "File deleted successfully." << endl;
    }
}

int main()
{
    int choice;
    do
    {
        cout << "1. Create a file" << endl;
        cout << "2. Read a file" << endl;
        cout << "3. Delete a file" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            createFile();
            break;
        case 2:
            readFile();
            break;
        case 3:
            deleteFile();
            break;
        case 4:
            break;
        default:
            cout << "Invalid choice." << endl;
        }
    } while (choice != 4);
    return 0;
}

/* Summary:-
This code implements a basic file management system that can create, read, and delete files. The user can choose one of these options through a menu-driven interface. The createFile function takes the user's input for the file name and content, creates the file, and writes the content to it. The readFile function takes the user's input for the file name and reads the content of the file. The deleteFile function takes the user's input for the file name and deletes the file.
*/