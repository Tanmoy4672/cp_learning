#include <bits/stdc++.h>
using namespace std;
int main()
{
    // find max element & min element
    vector<int> v = {2, 3, 5, 5, 7, 7, 1};

   // max_element(v.begin(), v.end());
    vector<int> :: iterator it = max_element(v.begin(), v.end()); //O(n)
    
    vector<int> :: iterator i = min_element(v.begin(), v.end()); //O(n)

    cout<< *it<<endl;
    cout<< *i<<endl;
    
    return 0;
}