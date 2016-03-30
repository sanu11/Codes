#include <bits/stdc++.h>
using namespace std;
int main() 
{
typedef long long ll;	
ll y=0,n,m,x,temp,c=1,sum=0,sum2=1;
cin>>n>>m;
for(int i=1;i<=m;i++)
{
scanf("%d",&x);
sum+=x;
}
c=1;
y=0;
for(int i=1;i<n;i++)
{
temp=c;
c+=y;
y=temp;
sum2+=c;
}
cout<<sum2-sum<<"\n";
return 0;
}
