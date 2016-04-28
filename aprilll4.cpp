#include <bits/stdc++.h>
using namespace std;
#define max 1000000007
int main() 
{
typedef   long long ll;
ll t,n,k,sum,i,temp;
cin>>t;
while(t--)
{
cin>>n>>k;
sum=1;
n--;
temp=k-1;
i=1;
ll a,b;
b=n;
a=k-1;
while (b)
{
    if (b % 2) { sum = (sum * a) % max; }

    a = (a * a) % max;
    b /= 2;
}
//cout<<sum<<	" ";
cout<<(sum%max*k%max)%max<<endl;
/*
while(i*2<=n)
{
sum=(temp%max*temp%max)%max;
temp=sum;
//cout<<temp<<" ";
i=i*2;
}
//cout<<i<<" "; 
if(i<n)
{
for(;i<n;i++)
	sum=(sum%max*(k-1)%max)%max;
}*/
//cout<<sum<<" "<<endl;
}
return 0;
}