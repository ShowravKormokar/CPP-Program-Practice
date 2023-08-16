#include <iostream>
using namespace std;

class temp
{
private:
    int count;

public:
    temp() : count(50) {}
    void operator++()
    {
        count += 10;
    }
    void Display()
    {
        cout << "Count: " << count << endl;
    }
};

int main()
{
    temp t;
    ++t;
    ++t;
    t.Display();

    return 0;
}