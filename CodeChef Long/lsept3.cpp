#include<bits/stdc++.h>
using namespace std;
class node
{
public:
int x,y,id,temp;
string str;
node()
{
temp=0;
}
};

int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n;
scanf("%d",&n);
vector<node>v;
int xmax,ymax,xmin,ymin,previd,x,y,a=0,c=0;
scanf("%d%d",&x,&y);
xmax=x;
xmin=x;
ymin=y;
ymax=y;
previd=0;
node p;
p.x=x;
p.y=y;
p.id=1;
p.str="n";
v.push_back(p);
for(int i=1;i<n;i++)
{
int a=0;
scanf("%d%d",&x,&y);
int temp=-1;
node p;
p.x=x;
p.y=y;
p.id=i+1;
if(x>=xmax&&y>=ymax)
{
xmax=x;
ymax=y;
p.str="SW";
v.push_back(p);
}
else if(x<=xmin&&y<=ymin)
{
xmin=x;
ymin=y;
p.str="NE";
v.push_back(p);
}
else if(y>=ymax&&x<=xmin)
{
ymax=y;
xmin=x;
p.str="SE";
v.push_back(p);
}
else if(y<=ymin&&x>=xmax)
{
ymin=y;
xmax=x;
p.str="NW";
v.push_back(p);
}
for(int j=0;j<v.size();j++)
{
if(v[j].str=="n")
{
if(v[j].x>x&&v[j].y>y)
v[j].str="SW";
else if(v[j].x>x&&v[j].y<y)
v[j].str="NW";
else if(v[j].x<x&&v[j].y<y)
v[j].str="NE";
else if(v[j].x<x&&v[j].y>y)
v[j].str="SE";
continue;
}
if(v[j].str=="NW")
if(x>v[j].x||y<v[j].y)
temp++;

if(v[j].str=="NE")
if(x<v[j].x||y<v[j].y)
temp++;

if(v[j].str=="SE")
if(x<v[j].x||y>v[j].y)
temp++;

if(v[j].str=="SW")
if(x>v[j].x||y>v[j].y)
temp++;

if(temp==-1)            //if in someones range,break
break;
}                           //end vectors for
if(temp==v.size())           //not in anyone's range,push to vector
{
node p;
p.x=x;
p.y=y;
p.id=i+1;
p.str="n";
p.temp=-1;
v.push_back(p);
}
}                               //input for end                               
for(int i=0;i<v.size();i++)
{
printf("%d ",v[i].id);
cout<<v[i].str<<"\n";
}
}                         //while end
return 0;
}








