#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
using namespace std;

int main()
{
    optimize();
    string s;
    int n;

    string p = to_string(n);
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> s;

        string tmp = s;
        reverse(tmp.begin(), tmp.end());
        if (s == tmp)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No"<<endl;
    }
    return 0;
}