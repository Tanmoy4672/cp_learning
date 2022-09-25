#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, n, x;
    vector<int> a(n);
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> n >> x;
         for (int z = 0; z < n; z++)
         {
            cin>>a[z];
         }
          
    }
    
     for (auto v : a)
            cin >> v;

    for (int j = 0; j < a.size(); j++)
    {
        int s = unique(a.begin(), a.end()) - a.begin();
        if (s > x)
        {
            cout << "Average" << endl;
        }
        else if (s < x)
        {
            cout << "Bad" << endl;
        }
        else
        {
            cout << "Good" << endl;
        }
    }
}