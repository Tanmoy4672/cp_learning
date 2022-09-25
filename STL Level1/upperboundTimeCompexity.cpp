#include <bits/stdc++.h>
using namespace std;
const int mx = 123;
int a[mx];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; i <= n; k++)
            {
                if(a[i]<a[j] && a[j]>a[k]) cnt++;
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}