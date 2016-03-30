#include <bits/stdc++.h>
using namespace std;
#define max 1000000007 
int main() 
{
unsigned long long m,n,x,t ;
unsigned long long temp2;
scanf("%lld",&t);
while(t--)
{
scanf("%lld%lld%lld",&n,&x,&m);
int sum=0,y=x;
unsigned long long a[n+1];
for(int i=1;i<=n;i++)
scanf("%lld",&a[i]);
if(x>2)
{
for(int j=0;j<m;j++)
for(int i=2;i<=n;i++)
a[i]=(a[i]%max+a[i-1]%max)%max;
}
else if(x==2)
a[2]=((a[1]%max*(m)%max)%max+a[2]%max)%max;
cout<<a[x]%max<<endl;
}
return 0;
}
