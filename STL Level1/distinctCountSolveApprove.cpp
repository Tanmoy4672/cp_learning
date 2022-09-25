#include <bits/stdc++.h>
using namespace std;
int main() {
	int num;
	cin >> num;    
for(int i = 0; i<num; i++)
{
	int n,x;
cin>>n>>x;
vector<int> a(n);
for(int z = 0; z<n; z++)
{
	cin>>a[z];
}
sort(a.begin(),a.end());
int s = unique(a.begin(),a.end()) - a.begin();
if(s>x)
{
	cout<<"Average"<<endl;
}else if(s<x)
{
	cout<<"Bad"<<endl;
}
else
{
	cout<<"Good"<<endl;
}
}
}