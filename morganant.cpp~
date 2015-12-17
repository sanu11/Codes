#include<bits/stdc++.h>
using namespace std;
long long md(long long ans,long long mx)
{
typedef long long ll;
ans=ans- ll(floor(ans/mx))*mx;
cout<<ans;
}

int main()
{
typedef long long ll;
int t;
scanf("%d",&t);
ll max=1000000007;
ll mod=73741817;
ll y,z;
int x;
while(t--)
{
	scanf("%d",&x);
	y=6;
	for (int i=0;i<(x-2)/4;i++)
		y=((y%max*81)%max+40)%max;
	if((x-2)%4==1)
		y=((y%max*3)%max+1)%max;
	else if((x-2)%4==2)
		y=((y%max*9)%max+4)%max;
	else if((x-2)%4==3)
	{
		y=((y%max*9)%max+4)%max;
		y=((y%max*3)%max+1)%max;
	}
	if(x>30)
	{
		z=ll(pow(2,x-30-1));
		z=z%max*mod;	
	}	
	else
	{
		z=ll(pow(2,x-1));
		z=z%max;
	}	
	long long ans=abs(y-z%max);
	md(ans,max);
	//printf("%lld\n",ans);
	}
return 0;
}
