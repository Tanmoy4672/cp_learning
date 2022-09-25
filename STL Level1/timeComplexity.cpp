#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define endl '\n';
using namespace std;
int main()
{
    optimize();
    int n, t;
    long long sum = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sum = (1LL * n *(n+1)) /2;
        cout<<sum<<endl;
    }
    return 0;
}