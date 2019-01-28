#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,x,y;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
int xmax,xmaxc,ymax,xmin,ymin,xminc;
scanf("%d%d",&x,&y);
ymax=y;
xmax=x;
xmaxc=x;
xminc=x;
xmin=x;
ymin=y;
vector<int>v,v2,ymnd,ymxd;
int temp=y,temp2=y;
v.push_back(x);
v2.push_back(x);
ymxd.push_back(0);
ymnd.push_back(0);
for(int i=1;i<n;i++)
{
scanf("%d%d",&x,&y);
if(x<xmin)
xmin=x;
if(x>xmax)
xmax=x;
if(y>ymax)
{
ymax=y;
xmaxc=x;
}
if(y<ymin)
{
ymin=y;
xminc=x;
}
if(y==ymax)
{
if(y!=temp)
{
temp=y;
v.resize(0);
ymxd.resize(0);
}
v.push_back(x);
ymxd.push_back(i);
}
if(y==ymin)
{
if(y!=temp2)
{
temp2=y;
v2.resize(0);
ymnd.resize(0);
}
v2.push_back(x);
ymnd.push_back(i);
}
}
int c,a,n,m=4,ymxdis,ymndis;
for(int i=0;i<v.size();i++)
{
xmaxc=v[i];
if(xmaxc==xmax)
{
a=1;           //SW
c=1;
ymxdis=ymxd[i];  
break;
}
else if(xmin==xmaxc)
{
a=2;           //SE
c=1;
ymxdis=ymxd[i];  
break;
}
else
{
a=3;
c=2;
ymxdis=ymxd[i];  
}
}
int p,q;
//cout<<a<<" "<<c<<" "<<ymxdis<<" hi\n";
for(int i=0;i<v2.size();i++)
{
xminc=v2[i];
ymndis=ymnd[i];
if(xminc==xmax)
{
p=1;
q=1;  //c
break; 
}
else if(xmin==xminc)
{
p=2;
q=1; //c
break;
}
else
{
p=3;
q=2;  //c
}
}
if(c<=q)
{
if(c==1)
{
printf("1\n");
cout<<ymxdis+1;
if(a==1)
printf(" SW\n"); 
else
printf(" SE\n"); 
}
else
{
printf("2\n");	
cout<<ymxdis+1;
printf(" SW\n");
cout<<ymxdis+1;
printf(" SE\n"); 
}
}
else
{
if(q==1)
{
printf("1\n");
cout<<ymndis+1;
if(p==1)
printf(" NW\n"); 
else
printf(" NE\n"); 
}
else
{
printf("2\n");
cout<<ymndis+1;
printf(" NW\n");
cout<<ymndis+1;
printf(" NE\n"); 
}
}
}
return 0;
}






