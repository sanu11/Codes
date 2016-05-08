#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
ll sum=14;
ll m;
ll w=43;
ll binary(ll a, ll b)
{
for(int i=1;i<10;i++)
	sum+=i;
if(a==b)
 return a;	
m=(a+b)/2;	
 cout<<m<<endl;
if(m==w)
return m;

else if(m>w)
binary(a,m);

else
binary(m+1,b);
}

int main()
{
	cout<<binary(1,100);
	return 0;
}