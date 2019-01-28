#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
ll n,j=1,k=1;	
scanf("%lld",&n);
ll g=n*n;
typedef pair<ll,ll> pr;
map<ll,pr>v;
ll x;
for(int i=0;i<n*n;i++)
{
scanf("%lld",&x);
v.insert(make_pair(x,make_pair(j,k)));
if(k%n==0)
{
	k=1;
	j++;
}
else
k++;
}

ll c=0;
for(int i=1;i<n*n;i++)
c=c+abs(v[i].first-v[i+1].first)+abs(v[i].second-v[i+1].second);
printf("%lld\n",c);
}
return 0;
}

