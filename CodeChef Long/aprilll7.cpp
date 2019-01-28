#include <bits/stdc++.h>
using namespace std;
int main() 
{
typedef   long long ll;
ll t,n,x,y,z,n1,mn;
cin>>t;
while(t--)
{
cin>>n;
n1=n;
n--;
mn=0;
while(n--)
{	
cin>>x>>y>>z;
mn=max(z,mn);
}
cout<<mn<<"\n";
for(int i=2;i<=n1;i++)
	cout<<"0\n";
}
return 0;
}