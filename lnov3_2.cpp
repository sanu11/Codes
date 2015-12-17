#include<bits/stdc++.h>
using namespace std;
int readint()
    {
       int cc = getc(stdin);
       for (;cc < '0' || cc > '9';)  cc = getc(stdin);
       int ret = 0;
       for (;cc >= '0' && cc <= '9';)
       {
          ret = ret * 10 + cc - '0';
          cc = getc(stdin);
       }
      return ret;
   }
int main()
{
int t,n;
t=readint();
while(t--)
{
n=readint();
std::vector<pair<int,int> > v;
int vi[n+1]={0};
long long sum=n;      //gcd(n,1)+gcd(n,n);
if(n>2)
sum+=1;	
std::vector<pair<int,int> >::iterator p;
for(int i=2;i<n;i++)
{
	int temp;
	if(vi[i]==0)
	{
	temp=std::__gcd(n,i);
    sum+=n/temp;
	p=v.begin();
	while(p!=v.end())
	{
	int tp=p->first*i;	
    if(tp<n)
    	{
    	 int g=p->second*temp;	
         if(p->second==temp)
     	g=temp;
     	 v.push_back(make_pair(tp,g));
		vi[tp]=g;
	sum+=n/g;
		}
		else
			break;
	p++;
	}
	v.push_back(make_pair(i,temp));
   	vi[i]=temp;
   }
}
p=v.begin();
/*for(;p!=v.end();p++)
{
	cout<<p->first<<" "<<p->second<<endl;
cout<<vi[p->first]<<endl;
}*/
printf("%lld\n",sum);
}
return 0;
}