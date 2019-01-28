#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
ll t,x,y,c,q;
cin>>t;
while(t--)
{
c=0;
scanf("%lld%lld",&x,&y);
while(x!=1&&y!=1)
{
if(x>y)
{
q=x/y;
c+=q;
x=x-q*y;
}
else
{
q=y/x;
c+=q;
y=y-q*x;
}
}
if(x>y)
c+=x/y-1;
else
c+=y/x-1;
printf("%lld\n",c);
}
return 0;
}



