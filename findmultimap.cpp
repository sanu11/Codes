#include<bits/stdc++.h>
using namespace std;
int main()
{
multimap<float,float> a;
typedef pair<float,float> Pair;
a.insert(Pair(2,100));
a.insert(Pair(3,20));
a.insert(Pair(1,15));
a.insert(Pair(1,10));
a.insert(Pair(2,20));
multimap<float,float>::iterator p1;
multimap<float,float>::iterator p=a.insert(Pair(2,1));
p1=p--;
cout<<p->first<<" "<<p->second<<"\n";
cout<<p1->first<<" "<<p1->second<<"\n";
//cout<<a.find(1)->second;
// /cout<<a.find(2)->second;
cout<<"hi\n";
for(p=a.begin();p!=a.end();p++)
	cout<<p->first<<" "<<p->second<<"\n";

/*p=v.begin();
for(;p!=v.end();p++)
	cout<<p->first<<" "<<p->second<<"\n";
cout<<"\n";
it2=a.begin();
for(;it2!=a.end();it2++)
	cout<<it2->first<<" "<<it2->second<<"\n";
cout<<"\n";*/

/*int mx=0;
for(it2=a.begin();it2!=a.end();++it2)
{	
if(it2->second>mx)
mx=it2->second;
}
printf("%d\n",mx);*/



}