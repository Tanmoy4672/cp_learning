#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
using namespace std;
int main()
{
    optimize();
    int t;
    cin >> t;

    set<int> s;
    while (t--)
    {
        int typ, x;
        cin >> typ >> x;
        if (typ == 1)
        {
            s.insert(x);
        }
        else if (typ == 2)
        {
            s.erase(x);
        }
        else
        {
            if (s.count(x) == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}