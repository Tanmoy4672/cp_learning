#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*in "SET" every element's are sorted & unique.
    In addition, in "multi-set" every elements are only sorted.
    time compexity log2n
*/
    multiset<int> s;
    s.insert(1);
    s.insert(4);
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    cout << s.size() << endl;
    for (auto u : s)
    {
        cout << u << " ";
    }
    cout << endl;

    cout << s.count(1) << endl; // always count exact time value "cos there is no sorting"

    s.erase(5); // all elements of 5 'cos it's target all 5 elements

    for (auto u : s)
    {
        cout << u << " ";
    }
    cout << endl;

    auto it = s.find(2); //find will take only first element of the selected element
    s.erase(it);
    for (auto u : s)
    {
        cout << u << " ";
    }
    cout << endl;


    
    return 0;
}