#include <bits/stdc++.h>
using namespace std;
const int mx = 1e3 + 123;
int a[mx];

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int ans = 1e9;
    for (int i = 1; i <= n; i++)
    {
        int c = 0;
        int sum = 0;
        for (int j = i; j <= n; j++)
        {
            c++;
            sum += a[i];
            if (c == k)
                break;
        }
        if (c == k)
            ans = max(ans, sum);
    }
    cout<<ans <<endl;

    return 0;
}