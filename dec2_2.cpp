#include <bits/stdc++.h>
using namespace std;
typedef map<float,int> M;
bool value_comparer(M::value_type &i1, M::value_type &i2)
{
return i1.second<i2.second;
}
int main()
{
typedef multimap<float,float> Map;
typedef pair<float,float> Pair;
int t,n,k,q,count;
scanf("%d",&t);
float l,b,c,y,z;
multimap<float,float>::iterator p,p1;
map<float,int>::iterator it2;
while(t--)
{
scanf("%d",&n);
Map v;
map<float,int> a;
for(int i=0;i<n;i++)
{
k=0;
scanf("%f%f%f",&l,&b,&c);
if(b!=0)
y=float(l/b);
else
y=1000000001;
if(b!=0)
z=float(c/b);
else
z=float(c/l);
count=0;
p=v.insert(Pair(y,z));
if(p==v.begin())
count=1;
else
p1=p--;
q=0;
if(count==0)
{	
while(true)
{ 	
if(p->first!=y)
break;	
if(p->second==z)
{
k=1;
v.erase(p1);
break;
}
if(p==v.begin())
break;
p--;
q=1;
}
if(k!=1)
a.find(y)->second++;
}
if(q==0) 
a.insert(Pair(y,1));
}
M::iterator itor = std::max_element(a.begin(), a.end(),value_comparer);
printf("%d\n",itor->second);
}
return 0;
}