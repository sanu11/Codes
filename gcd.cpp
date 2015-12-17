#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
if(b==0)
return a;
else
return gcd(b,a%b);
}
int main()
{
int n,m;
cin>>n>>m;
if(n>m)
cout<<gcd(n,m);
else
cout<<gcd(m,n);
}