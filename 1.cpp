#include <bits/stdc++.h>
using namespace std;
int main() 
{
int n,m;
scanf("%d %d",&n,&m);
int c=1;
int y=1;
int x,sum=0;
scanf("%d",&x);
int i=1;
int temp;
if(x!=c)
{
while(x!=c)
{
 sum+=c;
 temp=c;
 c+=y;
y=temp;
cout<<c<<" "<<x<<"\n";
i++;
}
}
cout<<"hi";
for(;i<=n;i++)
{
scanf("%d",&x);
while(x!=c)
 {
 sum+=c;
 temp=c;
 c+=y;
y=temp;
cout<<c<<" "<<x<<"\n";
}
temp=c;
c+=y;
y=temp;
}
return 0;
}
