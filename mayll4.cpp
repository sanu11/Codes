#include<bits/stdc++.h>
using namespace std;
int a[11];
int i=1;
std::vector<int> v;
int n,m,s;
int rec(int temp)
{	

if(i>=(m+1))
{
v.push_back(temp);
return 0;
}	

if(temp+a[i]<=n)
{
cout<<"+"<<endl;	
cout<<i<<endl;
rec(temp+a[i]);
}

if(temp-a[i]>=0)
{	
cout<<"-"<<endl;
cout<<i<<endl;
rec(temp-a[i]);         // 1 2 3
}
v.push_back(temp);
i++;
}
int main()
{
cin>>n>>m>>s;
for(int i=1;i<=m;i++)
cin>>a[i];
rec(s);
	
	//  cout<<v.size()<<endl;
	// for(int i=0;i<v.size();i++)
	// 	cout<<v[i]<<endl;
	// 	return 0;
}