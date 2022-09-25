#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4];

    // declaring a vector
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* assing vector element */
        int a;
        cin >> a;
        v.push_back(a);
    }

    for (int i = 0; i < v.size(); i++)
    {
        /* view vector element */
        cout << v[i] << " ";
        cout << endl;
    }

    // iterator means pointer
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // for each loop
    for (auto u : v)
        cout << u << " ";
    cout << endl;

    // when vector find 0 , it will terminated it's programe

    int dig;
    vector<int> num;
    while (cin >> dig)
    {
        /* when element find 0 it will stop it's programe*/
        if (dig == 0)
            break;
        num.push_back(dig);
    }

    cout << num.size() << endl;
    for (auto value : num)
        cout << value << " ";
    cout << endl;

    return 0;
}