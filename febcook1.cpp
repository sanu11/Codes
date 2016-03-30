#include<bits/stdc++.h>
using namespace std;
long long sum(long long i)
{
	return i*(i+1)/2;
}
int main()
{

long long t,temp,n,d;
scanf("%lld",&t);
while(t--)
{
scanf("%lld%lld",&d,&n);
temp=n;	
for(int i=0;i<d;i++)
{	
temp=sum(temp);
}
cout<<temp<<endl;
}
	return 0;
}