#include <bits/stdc++.h>
using namespace std;
#define max 3
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
int main()
{	
unsigned long long temp,a,b;
cin>>a>>b;  //(a/b%max)
cout<<a/b%max<<endl;
temp=mod(b);
cout<<(a%max*temp)%max<<endl;
}