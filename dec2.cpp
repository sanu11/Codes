#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef map<float,int> M;
bool value_comparer(M::value_type &i1, M::value_type &i2)
{
return i1.second<i2.second;
}
int main()
{
typedef multimap<float,float> Map;
typedef pair<float,float> Pair;
int t;
scanf("%d",&t);
while(t--)
{
int n;
scanf("%d",&n);
Map v;
map<float,int> a;
float l,b,c;
float y,z;
 multimap<float,float>::iterator p;
 multimap<float,float>::iterator it;
map<float,int>::iterator it2;
for(int i=0;i<n;i++)
{
int k=0;
scanf("%f%f%f",&l,&b,&c);
if(b!=0)
y=float(l/b);
else
y=1000000001;
if(b!=0)
z=float(c/b);
else
z=float(c/l);
int q=0;
pair<Map::iterator,Map::iterator> range =v.equal_range(y);
for(it=range.first;it!=range.second;++it)
{ 
q=1;	
if(it->first==y&&it->second==z)
{
k=1;
}
}
if(k!=1&&q==1)
{
it2=a.find(y);
it2->second++;
}
v.insert(Pair(y,z));
if(q==0)
{
a.insert(Pair(y,1));
}
}
M::iterator itor = std::max_element(a.begin(), a.end(),value_comparer);
printf("%d\n",itor->second);
}
return 0;
}