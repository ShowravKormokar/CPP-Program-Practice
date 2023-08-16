#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int x, y;
    cin >> x >> y;
    int z = max(x, y);
    int u = min(x, y);
    cout << z << endl
         << u;
    return 0;
}