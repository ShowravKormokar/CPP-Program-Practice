#include <iostream>
#include <cstring>
#include <vector>
#include <iterator>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Way 1:
    // vector<int> nums({1, 2, 3, 4, 5, 6});
    // for (int i = nums; i != nums.sizeof(); i++)
    // {
    //     cout << nums << endl;
    // }

    // Way 2:
    // vector<string> nums = {"ami", "bari", "jabo", "na"};
    // for (string num : nums)
    // {
    //     cout << num << endl;
    // }

    // Way 3:
    // vector<string> names({"sudip", "showrav", "sudipa", "ami"});

    // for (vector<string>::iterator it = names.begin(); it != names.end(); it++)
    //     cout << *it << endl;

    // Way 4:
    vector<int> vec{0, 1, 2, 3, 4};
    for (auto it = begin(vec); it != end(vec); it++)
    {
        // Access element using dereference operator
        cout << *it << " ";
    }
}