#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,m;
scanf("%d",&t);
while(t--)
{	
scanf("%d%d",&n,&m);
bool vi[n+1]={0};
int i=m+1;
int k=1;
while(true)
{
if(vi[i]!=1)
vi[i]=1;
else
break;
i=(i+m)%n;
if(i==0)
i=n;
}
int c=0;
for(int i=1;i<=n;i++)
if(vi[i]==1)
	c++;
if(c==n)
	printf("Yes\n");
else 
	printf("No %d\n",c);
}
return 0;
}