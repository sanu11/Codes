#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    scanf("%d",&n);
    vector<int>v(n+1);
    vector<int>v2(n+1);
    int vi[n+1]={0};
    int x,p;
    for (int i=0;i<n;i++)
    {
        scanf("%d%d",&x,&p);
        v[i+1]=x;
        v2[i+1]=p;
    }
double c=1;
x=1;
int flag,tmp;
double k=0;
double cf[n]={1};
while(true)
{
tmp=x;
int count=0,a=0;
while(vi[x]==0)
{
count++;
vi[x]=1;    
c=c*v2[x]/100;
cf[x]=c;    
x=v[x];
if(vi[x]==1&&count==1)
a=1;
}
if(x==tmp)
  k=k+c;
else if(a==0)
{
c=c/cf[x];
c=c*v2[x]/100;
k=k+c;
}
    c=1;
    x=1;
    flag=0;
    while(vi[x]!=0&&x<=n)
    x++;
	//dg=0;
    if(x==(n+1))
        flag=1;
    if(flag==1)
        break;
}
printf("%lf",k);
    return 0;
}

