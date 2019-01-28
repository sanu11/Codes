#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
long longf fun(long long b, long long e)
{
    typedef long long ll;
    ll result = 1;
    while (e> 0)
    {
        if (e % 2 == 1)
            result = (result * b) % mod;
        e = e >> 1;
        b = (b * b) % mod;
    }
    return result;
}

int main()
{
     typedef long long ll;
ll t,n;
scanf("%lld",&t);
while(t--)
{
scanf("%lld",&n);
n++;
vector<ll>a(n);
for(ll i=0;i<n;i++)
scanf("%lld",&a[i]);
ll temp=n-2;
ll c=temp;
ll sum=0;
ll count=1;
for(ll i=0;i<n;i++)
{
	if(i==2)
	count=2;
	if(i>2)
	count=(count*2)%mod;
for(ll j=i+1;j<n;j++)
{

	ll x=(a[i]%mod*a[j]%mod*fun(2,c)*count%mod)%mod;
	sum+=x;
	c--;
}
temp--;
c=temp;
}
cout<<(sum*2)%mod<<endl;
}

	return 0;
}