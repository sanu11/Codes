#include <bits/stdc++.h>
using namespace std;
int main() 
{
typedef   long long ll;
ll t,n,m;
cin>>t;
while(t--)
{
cin>>n>>m;
if(n==1||m==1)
{
	if(n==2||m==2)
		cout<<"Yes\n";
	else
		cout<<"No\n";
}
else if(n%2==0||m%2==0)
cout<<"Yes\n";
else
cout<<"No\n";
}
return 0;
}