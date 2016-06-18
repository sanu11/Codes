#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,x,avg=0,sum=0;
cin>>t;
while(t--)
{
cin>>n;
sum=0;
for(int i=0;i<n;i++)
{
cin>>x;
sum+=x;
sum=sum%n;
}
avg=sum/n;
if(n*avg==sum)
	cout<<"YES\n";
else
	cout<<"NO\n";
}
	return 0;
}