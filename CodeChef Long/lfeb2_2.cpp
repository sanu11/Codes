#include <bits/stdc++.h>
using namespace std;
#define max 1000000007
unsigned long long powr(unsigned long long x, unsigned long long y)
{
    if (y == 0)
        return 1;
    unsigned long long r = (unsigned long long)powr(x, y/2) % max;
    r= (r*r) % max;
    if(y%2==0)
        return r;
    else
        return (x*r)%max;
}
unsigned long long mod(unsigned long long a)
{
             return  (unsigned long long)powr(a, max-2);
}
int modInverse(int a, int m) {
    a %= m;
    for(int x = 1; x < m; x++) {
        if((a*x) % m == 1) return x;
    }
}
 int main() 
{
int t;
unsigned long long m,n,x ;
unsigned  long long temp2;
scanf("%d",&t);
while(t--)
{
scanf("%llu%llu%llu",&n,&x,&m);
 unsigned long long sum=0,y=x,temp=0;
unsigned  long long a[n+1];
for( int i=1;i<=n;i++)
{
scanf("%llu",&a[i]);
a[i]=a[i]%max;
}
temp2=1;
m--;
for(int i=1;i<=y;i++)
{
sum=(sum%max+((a[y-i+1]*temp2)%max)%max)%max;
temp=modInverse(i,max);                  //multiply count with that number and add to sum.
temp2=(((temp2%max*(m+i)%max)%max)*temp%max)%max;                                            //find count of nxt number
}
cout<<sum%max<<endl;
}
return 0;
}