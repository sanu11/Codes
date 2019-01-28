#include <bits/stdc++.h>
using namespace std;
#define max 1000000007
unsigned long long gcdExtended(unsigned long long a, unsigned long long b, unsigned long long *x, unsigned long long *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
 
    unsigned long long x1, y1; // To store results of recursive call
   unsigned long long gcd = gcdExtended(b%a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
    return gcd;
}

unsigned long long mod(unsigned long long a,unsigned long long m)
{
    unsigned long long x, y;
    unsigned long long g = gcdExtended(a, m, &x, &y);
    if (g != 1)
        return 0;
    else
    {
        // m is added to handle negative x
        unsigned long long res = (x%m + m) % m;
   
    return res;
}
}
// C function for extended Euclidean Algorithm

int main() 
{
unsigned long long m,n,x,t ;
unsigned long long temp2;
scanf("%llu",&t);
while(t--)
{
scanf("%llu%llu%llu",&n,&x,&m);
unsigned long long sum=0,y=x,temp=0;
unsigned long long a[n+1];
for(int i=1;i<=n;i++)
scanf("%llu",&a[i]);
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

