#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t,n,m;
scanf("%lld",&t);
while(t--)
{	
scanf("%lld%lld",&n,&m);
if(n==1&&m==0)
printf("Yes\n");
else if(m==0)
	printf("No 1\n");
else
{
long long g=std::__gcd(n,m);
if(g!=1)
	printf("No %lld\n",n/g);
else 
printf("Yes\n");
}
}
return 0;
}