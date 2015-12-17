#include <bits/stdc++.h>
using namespace std;
typedef map<double,int> M;
bool value_comparer(M::value_type &i1, M::value_type &i2)
{
return i1.second<i2.second;
}
int main()
{
typedef multiset<pair< double,double > > Map;
typedef pair<double,double> Pair;
int t,n,k,q,count;
scanf("%d",&t);
double l,b,c,y,z;
multiset< pair<double,double> >::iterator p,p1;
map<double,int>::iterator it2;
while(t--)
{
scanf("%d",&n);
Map v;
map<double,int> a;
for(int i=0;i<n;i++)
{
k=0;
q=0;
scanf("%lf%lf%lf",&l,&b,&c);
if(b!=0)
y=double(l/b);
else
y=1000000001;
if(b!=0)
z=double(c/b);
else
z=double(c/l);
count=0;
p=v.insert(make_pair(y,z));
if(p==v.begin())
count=1;
if(v.size()==1)
count=2;
else
p1=p++;
if(count!=2)
{
if(p!=v.end())	
{
if(p->first==y)
{
if(p->second==z)
{	
	k=1;
	v.erase(p1);
}
}
else
q++;
}
else
q++;

p--;
if(count!=1&&k==0&&p!=v.begin())
{
p--;
if(p->first==y)
{
if(p->second==z)
{
k=1;	
v.erase(p1);	
}
}
else
q++;
}
else if(p==v.begin())
q++;

if(k==0)
	a.find(y)->second++;
if(q==2)
	a.insert(Pair(y,1));
}
else
a.insert(Pair(y,1));
}
/*
p=v.begin();
for(;p!=v.end();p++)
	cout<<p->first<<" "<<p->second<<"\n";
cout<<"\n";
it2=a.begin();
for(;it2!=a.end();it2++)	
	cout<<it2->first<<" "<<it2->second<<"\n";
cout<<"\n";
*/
M::iterator itor = std::max_element(a.begin(), a.end(),value_comparer);
printf("%d\n",itor->second);
}
return 0;
}