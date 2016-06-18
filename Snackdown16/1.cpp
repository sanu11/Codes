#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll t,n;
cin>>t;
while(t--)
{
	ll count=0;
	cin>>n;
	ll a[n],b[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	for(int i=0;i<n;i++)
	cin>>b[i];


if(b[0]<=a[0])
	count++;
for(int i=1;i<n;i++)
{
if(b[i]<=(a[i]-a[i-1]))
count++;
}
printf("%lld\n",count);
}
return 0;
}