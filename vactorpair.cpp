// VECTOR IN C++-dynamic array size can't be declare.
PAIR : -it is an STL container which allows us to store pair of values

// CODE:-
#include <iostream>
#include <vector>
 using namespace std;

int main()
{

    // pairs
    pair<int, char> p;
    // access
    p.first = 1;
    p.second = 'f';

    // vector name then data type then give name
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // to print vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    // other way to iterate is through vector
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    // other way to iterate is through vector is through auto keyword as we say to compiler that decide urself which data type we r using
    for (auto element : v)
    {
        cout << element << endl;
    }

    // to del any element we simply pop it:
    v.pop_back();

    // vector size and key value we can also specify
    vector<int> v2(3, 50);

    // swap elements:
    swap(v, v2);
    for (auto element : v)
    {
        cout << element << endl;
    }
    for (auto element : v2)
    {
        cout << element << endl;
    }

    // sort elements
    sort(v.begin(), v.end());

    return 0;
}
