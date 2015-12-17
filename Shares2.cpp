#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() 
{
ll t,n,x,y;
scanf("%lld",&t);
while(t--)
{
ll count=0,count2=0;
scanf("%lld",&n);
vector<ll> v(n);
vector<ll> a(n);
scanf("%lld",&v[0]);
a[0]=v[0];
ll mx=-1;
for(int i=1;i<n;i++)
{
scanf("%lld",&v[i]);
a[i]=a[i-1]+v[i];
}
ll i=v.size()-1;
mx=v[i];
i=i-1;
count2=0;
ll k=0;
for(;i>=0;i--)
{
	if(v[i]<mx)
		{
		k++;
		count2+=v[i];
    	}
    else if(v[i]>mx)
    {
   if(k!=0)
     count+=mx*k-count2;
  k=0;
  mx=v[i];
  count2=0;
    }
    if(i==0&&k!=0)
    {

    	count+=mx*k-count2;
    }
}
cout<<count<<"\n";
}
return 0;
}


