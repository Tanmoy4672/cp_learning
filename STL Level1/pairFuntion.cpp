#include <bits/stdc++.h>
using namespace std;
/*
struct  pair
{

    int first, second;
};
*/

int main()
{

//printing pair value take string value and vector
    pair<string, vector<int>> p;
    string s = p.first = "Tanmoy shome";
    vector<int> v = p.second = {1, 2, 3};
    cout << s << endl;
    for (auto u : v)
    {
        cout << u << " "
             << ",";
    }

//make_pair function
    pair<int, int> p1;
    p1 = make_pair(2, 3);
    cout << p1.first << " " << p1.second << endl;

//make pairing without make_pair function
    pair<int, int> p3;
    p3 = {2, 3};
    cout << p3.first << " " << p3.second << endl;

    p3.first++;
    cout<<p3.first<<endl;

cout<<endl;
//pair in vector and sorting
vector<pair<int, int>> v1;
v1.push_back({6,5});
v1.push_back({2,3});
v1.push_back({4,5});
v1.push_back({6,1});
v1.push_back({1,9});

sort(v1.begin(),v1.end());
for(auto t : v1)
{
    cout<<t.first<<" "<<t.second<<endl; 
}
cout<<endl;
//in reverse order sorting
sort(v1.rbegin(),v1.rend());
for(auto t : v1)
{
    cout<<t.first<<" "<<t.second<<endl; 
}
cout<<endl;
//pair in array
pair<int, int> p5[] = {{6,5}, {2,3},{4,5},{6,1},{1,9}};
sort(p5, p5+5);
for (int i = 0; i < 5; i++)
{
    /* code */
    cout<<p5[i].first<<" "<<p5[i].second<<endl;
}

    return 0;


}