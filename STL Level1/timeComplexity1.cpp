#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
using namespace std;
const int mx = 1e3 + 123;
int a[mx];
int main()
{
    optimize();
    int cnt = 0;
    int n, sum;
    cin >> n >> sum;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i]+a[j]==sum)
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}