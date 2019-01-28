#include<bits/stdc++.h>
using namespace std;
int readint()
    {
       int cc = getc(stdin);
       for (;cc < '0' || cc > '9';)  cc = getc(stdin);
       int ret = 0;
       for (;cc >= '0' && cc <= '9';)
       {
          ret = ret * 10 + cc - '0';
          cc = getc(stdin);
       }
      return ret;
   }
int main()
{
int t;
t=readint();
while(t--)
{
int n;
n=readint();
long long sum=0;
for(int i=1;i<=n/2;i++)
{
sum+=n/std::__gcd(n,i);
}
if(n>2&&n%2==0)
sum+=n*(n/2-1);
else if(n%2!=0&&n>2)
sum+=n*(n/2);
sum+=1;
printf("%lld\n",sum);
}
return 0;
}