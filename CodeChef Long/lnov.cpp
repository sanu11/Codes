#include<bits/stdc++.h>
using namespace std;
int a[10];
int stcal(long long a)
{
long long sum=0	;
string s;
stringstream stream;
 stream << a;
  s= stream.str();
while(sum>9)
{
 for(int i=0;i<s.length();i++)
{
	long long val;
 	std::stringstream sstr(s);
	__int64 val;
	sstr >> val;
 	sum+=val;
}
}
return sum;
}
int main()
{
long long t,l,r,n,d;
scanf("%lld",&t);
while(t--)
{
scanf("%lld%lld%lld%lld",&n,&d,&l,&r);
int k=l;
for(int i=0;i<10;i++)
{
a[i]=stcal(k+i*d);
cout<<a[i]<<"\n";
}
}
return 0;
}