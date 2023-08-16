#include <iostream>
#include <cstring>
using namespace std;
main()
{
    int bol, temp = 0;
    float cre, grPo;
    // SHOWRAV KORMOKAR :)
    cout << "Enter your earning credit: ";
    cin >> cre;
    cout << "Enter your earning grade point: ";
    cin >> grPo;
    (cre >= 5.75 && cre <= 11.5 || grPo >= 1.75 && grPo <= 4.00) ? cout << "\nCongratulations! you are pass.\n" : cout << temp++ << "Sorry! you are fail.";
    if (temp == 0)
    {
        cout << "\nAre you ready for next challenge?" << endl
             << "Type \'1\' if you are ready, or \'0\' otherwise: ";
        cin >> bol;
        (bol == 1) ? cout << "\nLet's start your next journey with \"C++\". And wish you best of luck.\nThank you." : cout << "Have courage and faith, you can do it.";
    }
    else
    {
        cout << "Try again with hardwork. And wish you best of luck."
             << "\n";
    }
    return 0;
}