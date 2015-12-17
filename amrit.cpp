#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n,g=0;
scanf("%d",&n);
int c[1001],x;
memset(c,0,sizeof(c));
/*for(int i=0;i<=1000;i++)
	cout<<c[i];*/
for(int i=1;i<=n;i++)
{
cin>>x;
c[x]++;
if(c[x]>1)
g=1;
}
if(g==0)
cout<<"YES\n";
else
cout<<"NO\n";
return 0;
}
}
