#include <bits/stdc++.h>
using namespace std;
int main()
{
    // repeated vector element
    vector<int> v = {2, 3, 6, 5, 8, 7, 1, 5, 4};
    /*find all the unique number
    1. Initially sort the vector
    2.then call the unique function
    */
    sort(v.begin(), v.end()); // O(nlog2(n))
    // unique(v.begin(),v.end());

    unique(v.begin(), v.end());
    for (auto u : v)
        cout << u << " ";

    int sz = unique(v.begin(), v.end()) - v.begin(); // O(n)
    cout << sz << endl;
    for (int i = 0; i < sz; i++)
    {
        /* code */
        cout << v[i] << " ";
    }

    cout << endl;
    return 0;
}