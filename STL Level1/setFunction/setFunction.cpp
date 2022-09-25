#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
using namespace std;

int main()
{
    optimize();

    set<int> s = {1, 1, 3, 3, 2, 2};

    s.insert(4);
    s.insert(5);
    s.insert(4);

    cout << s.count(4) << endl;
    cout<<*s.begin()<<endl;

    set<int>::iterator it;

    for (it = s.begin(); it != s.end(); it++)
    {
        /* code */
        cout << *it << " ";
    }
    cout << endl;



    return 0;
}