#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
ll n,m;
scanf("%lld%lld",&n,&m);
vector<ll>v(m+1);
ll c=0;
for(int i=1;i<=m;i++)
{
scanf("%lld",&v[i]);
if(v[i]==1)
c++;
}
if(c==m)
{
printf("%lld\n",m/2);
}
else
{
sort(v.begin()+1,v.end());
c=v[1];
for(int i=2;i<=m;i++)
{
v[i]=v[i]+c;
c=v[i]				//cumulative
}
ll x=m-1;  
int i=1;
while(x-i>=v[i])            //removed i number of chains and v[i] number of donuts
i++;
i--;
printf("%lld\n",x-i);
}
}
return 0;
}
