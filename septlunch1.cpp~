#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
long long total=0;
int l,r,re,temp,sum=0;
scanf("%d%d",&l,&r);
int i;
for( i=l;i<=r;i++)
{
temp=i;
sum=0;
while(temp)
{
re=temp%10;
temp=temp/10;
sum=sum*10+re;
}
if(sum==i)
{
total+=sum;
//cout<<sum<<" ";
}
}
printf("%lld\n",total);
}	
return 0;
}






