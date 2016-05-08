#include<bits/stdc++.h>
using namespace std;
int a[11];
int i=0;
std::vector<int> v;
int n,m,s;
int rec(int temp)
{	
cout<<temp<<endl;
i++;	
if(i==m+1|| temp>n ||temp<0)
{
v.push_back(temp);
return 0;
}
rec(temp+a[i]);
rec(temp-a[i]);
}
int main()
{
cin>>n>>m>>s;
for(int i=1;i<=m;i++)
cin>>a[i];
rec(s);
	// // cout<<v.size()<<endl;
	// for(int i=0;i<v.size();i++)
	// 	cout<<v[i]<<endl;
	// 	return 0;
}