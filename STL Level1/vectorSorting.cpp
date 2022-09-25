#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Non decreasing order : 1 2 2 3 5
    // non increasing order: 5 2 2 1 0
    int a[] = {5, 4, 2, 3};
    sort(a, a + 4);
    // array sorting
    for (auto ar : a)
    {
        cout << ar << " ";
    }
    cout << endl;

    // vector sorting
    vector<int> v = {5, 4, 2, 3};
    sort(v.begin(), v.end()); // O(nlog2(n))
    for (auto u : v)
        cout << u << " ";
    cout << endl;

    // sorting index from 1 to 3

    vector<int> num = {3, 5, 2, 7, 3};
    sort(num.begin() + 1, num.begin() + 4); // O(nlog2(n))

    for (auto number : num)
        cout << number << " ";
    cout << endl;

    // sorting index greater to lower

    vector<int> num1 = {3, 5, 2, 7, 3, 4, 1};
    sort(num1.begin(), num1.end(), greater<int>()); // O(nlog2(n))

    for (auto number1 : num1)
        cout << number1 << " ";
    cout << endl;

    // anoter way of sorting index greater to lower

    vector<int> num2 = {3, 5, 2, 7, 3, 4, 1};
    sort(num2.rbegin(), num2.rend()); // O(nlog2(n))

    for (auto number2 : num2)
        cout << number2 << " ";
    cout << endl;

    // anoter way of sorting index greater to lower

    vector<int> num3 = {3, 5, 2, 7, 3, 4, 1};
    reverse(num3.begin(), num3.end()); // O(nlog2(n))

    for (auto number3 : num3)
        cout << number3 << " ";
    cout << endl;

    // pring last and first element
    vector<int> v1 = {5, 4, 2, 3};

    cout << *v1.begin() << endl;
    cout << v1.back()<<endl; // O(1)

//delete last element
    v1.pop_back();  
    //print vector size
    cout << v1.size()<<endl;
    cout<<v1.back()<<endl;
    for(auto v2 : v1) cout<<v2<<" ";
    cout<<endl;

    //delete first value
    v1.erase(v1.begin());   //O(n)
      for(auto v2 : v1) cout<<v2<<" ";
    cout<<endl;


    //deleting all vector element
    vector<int> tan = {3, 4, 1 , 6, 3, 2};

    reverse(tan.begin(), tan.end());
    
    while (!tan.empty())   //O(n)
    {
        /* untill element list is empty element will be print  */
        cout<<tan.back()<<endl;
        tan.pop_back();
    }
    

    return 0;
}