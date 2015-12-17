#include<bits/stdc++.h>
using namespace std;
map<int, pair<int,int> >v;
map<int,string>str;
map<int, pair<int,int> >::iterator h;	
int xmax,ymax,xmin,ymin,pxmx,pxmn,pymx,pymn,x,y,a,c;
void check(int i)
{
int x=v[i].first;
int y=v[i].second;
string s=str[i];	
for(h=v.begin();h!=v.end();h++)
{
int id=h->first;	
int p=h->second.first;
int q=h->second.second;
if(id!=i&&i!=1)
{
cout<<i;
if(s=="NE"&&p>=x&&q>=y)
v.erase(h);
else if(s=="NW"&&p<=x&&q>=y)
v.erase(h);
else if(s=="SE"&&p>=x&&q<=y)
v.erase(h);
else if(s=="SW"&&p<=x&&q<=y)
v.erase(h);
}
}
}
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n;
scanf("%d",&n);
a=0,c=0;
scanf("%d%d",&x,&y);
xmax=x;
xmin=x;
ymin=y;
ymax=y;
pxmx=0;
pymx=0;
pxmn=0;
pymn=0;
v.insert(make_pair(0,make_pair(x,y)));
str[0]="n";
//cout<<v[0].first<<" "<<v[0].second<<"\n";	
for(int i=1;i<n;i++)
{
int a=0;
scanf("%d%d",&x,&y);
int temp=-1;
for(h=v.begin();h!=v.end();h++)
{	
int j=h->first;	
 	if(str[j]=="n")
{
if(v[j].first>x&&v[j].second>y)
str[j]="SW";
else if(v[j].first>x&&v[j].second<y)
{	
str[j]="NW";
cout<<j<<"in loop"<<endl;
}
else if(v[j].first<x&&v[j].second<y)
str[j]="NE";
else if(v[j].first<x&&v[j].second>y)
str[j]="SE";
}
if(str[j]=="NW")
if(x<v[j].first||y>v[j].second)
temp++;

if(str[j]=="NE")
if(x>v[j].first||y>v[j].second)
temp++;

if(str[j]=="SE")
if(x>v[j].first||y<v[j].second)
temp++;

if(str[j]=="SW")
if(x<v[j].first||y<v[j].second)
temp++;
}                           //end vectors for
  cout<<temp<<" in temp i= "<<i<<endl;       //not in anyone's range,push to vec
if(x>=xmax&&y>=ymax)
{
xmax=x;
ymax=y;
str[i]="SW";
if(i!=1)
v.erase(pxmx);
v.insert(make_pair(i,make_pair(x,y)));
pxmx=i;
check(i);
a=1;
}
else if(x<=xmin&&y<=ymin)
{
xmin=x;
ymin=y;
str[i]="NE";
if(i!=1)
v.erase(pxmn);
v.insert(make_pair(i,make_pair(x,y)));
pxmn=i;
check(i);
a=1;
}
else if(y>=ymax&&x<=xmin)
{
ymax=y;
xmin=x;
str[i]="SE";
if(i!=1)
v.erase(pymx);
v.insert(make_pair(i,make_pair(x,y)));
pymx=i;
check(i);
a=1;
}
else if(y<=ymin&&x>=xmax)
{
ymin=y;
xmax=x;
str[i]="NW";
if(i!=1)
v.erase(pymn);
v.insert(make_pair(i,make_pair(x,y)));
pymn=i;
check(i);
a=1;
}
if(temp==-1&&a==0)
{
v.insert(make_pair(i,make_pair(x,y)));
cout<<i<<"in else"<<"\n";
str[i]="n";
}
}                         //input for end                               
//cout<<v.size()<<"\n";
for( h=v.begin();h!=v.end();h++)
{
int k=h->first;
//cout<<h->second.first<<" "<<h->second.second<<endl;	
//cout<<k<<"\n";
printf("%d ",k+1);
cout<<str[k]<<"\n";
}
}                  //while end
return 0;
}








