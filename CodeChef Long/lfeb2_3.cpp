#include <bits/stdc++.h>
using namespace std;
#define max 1000000007
unsigned long long mod(unsigned long long  a, unsigned long long m)
{
   unsigned long long x, y;
   unsigned long long res = (x%m + m) % m;
        return res;
}
int main() 
{
unsigned long long m,n,x,t ;
unsigned long long temp2;
scanf("%lld",&t);
while(t--)
{
scanf("%lld%lld%lld",&n,&x,&m);
unsigned long long sum=0,y=x,temp=0;
unsigned long long a[n+1];
for(int i=1;i<=n;i++)
scanf("%lld",&a[i]);
temp2=1;
m--;
for(int i=1;i<=y;i++)
{
sum=(sum%max+((a[y-i+1]%max*temp2%max)%max)%max)%max;                  //multiply count with that number and add to sum.
temp=mod(i,max);
temp2=(((temp2%max*(m+i)%max)%max)*temp%max)%max;                                            //find count of nxt number
}
cout<<sum%max<<endl;
}
return 0;
}

