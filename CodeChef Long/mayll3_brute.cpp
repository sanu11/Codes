#include<bits/stdc++.h>
using namespace std;
 
int main()
{
typedef long long ll;
ll w,l,n;
scanf("%lld %lld %lld",&n,&w,&l);
vector<ll> h(n);
vector<ll> r(n);
for(int i=0;i<n;i++)
scanf("%lld %lld",&h[i],&r[i]);
ll m=0;
ll sum=0;
ll temp=0;
while(1)
{
sum=0;
for(int i=0;i<n;i++)
{
temp=r[i]*m+h[i];
if(temp>=l)
sum+=temp;
}
if(sum>=w)
{
	printf("%lld\n",m);
break;
}
m++;
}
	return 0;
} 