#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> c;
    vector<int> v;

    c["Tanmoy"] = 1;
    c["Tamol"] = 2;
    c["Samir"] = 3;
    c["Putul"] = 4;
    c["Kaprekar"] = 5;

    cout << c["Putul"] << endl;

    cout << "-----------------" << endl;
    // dificulty code
    vector<long long> v1 = {1, 2144453252, 51515151, 2144453252, 2144453252};
    map<long long, int> c1;

    for (int i = 0; i < v1.size(); i++)
    {
        c1[v1[i]]++;
    }
    cout << c1[2144453252] << endl;

    cout << "-----------------" << endl;

    // important logic
    map<int, int> vis;
    vector<int> vs = {2, 3, 4, 5, 6, 7};
    for (auto u : vs)
    {
        vis[u] = 1;
    }

    for (auto u : vis)
    {
        cout << u.first << " " << u.second << endl;
    }

    cout << "----------------------" << endl;
    // vector with mapping
    vector<map<string, int>> vm;
    map<string, int> m;

    m["tanmoy"] = 1;
    vm.push_back(m);

    cout << vm[0]["tanmoy"] << endl;

    // printing unique value size
    map<int, int> mp;
    mp[1] = 1;
    mp[2] = 1;
    mp[3] = 1;
    mp[2] = 1;
    mp[3] = 1;
    
    mp[6] = 1;

    cout<<mp.size()<<endl;

    return 0;
}