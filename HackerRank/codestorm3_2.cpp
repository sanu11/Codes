#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   
   while(t--)
   {
       int n,k;
       scanf("%d",&n);
       vector<int>v(n,0);
   int size=n;
       for(int i=0;i<n;i++)
           v[i]=i+1;
        int p=0;
        while(v.size()!=1)
        {
        n=v.size();
	v.erase(v.begin()+(p+n/2)%n);
	if(n%2==0)
	{
	k=1;
	for(int i=1;k<=n/4;)
	{
	v.erase(v.begin()+p);
	if(k!=n/4)
	v.erase(v.begin()+i+p-k+n/2);
	if(k==n/4&&n%4!=0)
	v.erase(v.begin()+i+p-k+n/2);
	i++;
	k++;
	}	
	}
	if(size%4==0)
	p=(size/4)%size;
	else if(size%4!=0)
	p=(size/4+1)%size;
   
for(int u=0;u<v.size();u++)	
	cout<<v[u]<<" ";
cout<<"\n";

   }
	
   }
    return 0;
}
