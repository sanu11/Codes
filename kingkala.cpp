#include <bits/stdc++.h>
using namespace std;
int main()
{

int t,n,a,b,c,x,y,c1,c2,temp;
scanf("%d",&t);
while(t--)
{
	
	scanf("%d",&n);
	scanf("%d %d %d",&a,&b,&c);
	c1=0;
	c2=0;
for(int i=0;i<n;i++)
{
	scanf("%d %d",&x,&y);
temp=a*x+b*y+c;
if(temp>0)
c1++;
else if(temp<0)
c2++;
}
cout<<max(c1,c2)<<endl;
}	return 0;
}
