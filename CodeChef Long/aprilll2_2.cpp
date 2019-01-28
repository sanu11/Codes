#include <bits/stdc++.h>
using namespace std;
int main() 
{
int t,n,r,g,b,k,temp,ans;
cin>>t;
while(t--)
{
int a[3]={0};
cin>>a[0]>>a[1]>>a[2];
cin>>k;
sort(a,a+3);
if(k<=(a[0]+1))
	temp=(k-1)*3+1;
else
{
temp=a[0];
if(k<=(a[1]+1))
temp+=(k-1)*2+1;
else
{
temp+=a[1];
temp+=k;
}
}
cout<<temp<<endl;
}
return 0;
}