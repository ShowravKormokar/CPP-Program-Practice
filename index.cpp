/*#include <iostream>
#include <string.h>
using namespace std;
main()
{
    string myName = "Showrav";
    cout << myName[3] << '\n';
    myName[5] = 'o'; // Change element by using index
    cout << myName;
    return 0;
}*/

/*#include <iostream>
#include <string.h>
using namespace std;
main()
{
    string txt = "Hello World! I\'m Showrav Kormokar from \"Bangladesh\".";
    string txt2 = "Hello World!\t I\'m Showrav Kormokar from \"Bangladesh\".";
    cout << txt << endl;
    cout << txt2;
    return 0;
}*/

#include <iostream>
#include <string.h>
using namespace std;
main()
{
    string fullName;
    cout << "Type your full name: ";
    getline(cin, fullName);  //Input a string with whitespace
    cout << "Your name is: " << fullName;
    return 0;
}