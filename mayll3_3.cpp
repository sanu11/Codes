#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
int main()
{
ll n,l,m,w,diff,sum=0,temp=0;
scanf("%lld %lld %lld",&n,&w,&l);
ll r[n];
ll h[n];
for(int i=0;i<n;i++)
scanf("%lld %lld",&h[i],&r[i]);

ll a=0,b=1000000000000000000;

while(1)
{
sum=0;	
if(a==b)
{
m=a;
break;
}	
m=(a+b)/2;
for(int i=0;i<n;i++)
{
temp=r[i]*m+h[i];
if(temp>=l)
sum+=temp;
}
if(sum==w)
break;
else if(sum>w)
b=m;
else
a=m+1;
}

cout<<m<<endl;
return 0;
}