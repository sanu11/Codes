#include<bits/stdc++.h>
using namespace std;
long long l,r;
long long a,d,t;
long long add_digits(long long a)
{
long long sum=0;
while(a!=0)
{	
sum+=a%10;
a=a/10;
}
if(sum>9)
return add_digits(sum);
else
return sum;
}
int  main()
{
scanf("%lld",&t);
while(t--)
{	
scanf("%lld%lld%lld%lld",&a,&d,&l,&r);
if(d%9==0)
{
long long add=add_digits(a);
printf("%lld\n",add*(r-l+1));
}
else if(d%3==0)
{
long long f=r-l+1;
long long quo=(f)/3;
long long diff=add_digits(d);
a=a+diff*(l-1);
long long add1=add_digits(a);
long long add2=add_digits(add1+diff);
long long add3=add_digits(add2+diff);
long long sum=(add1+add2+add3)*quo;
if(f%3==1)
	cout<<sum+add1<<endl;
else if(f%3==2)
	cout<<sum+add2+add1<<endl;
else
	cout<<sum<<endl;
}
else
{
long long quo=(r-l+1)/9;
long long ans=45*quo;
long long add=add_digits(a);
long long diff=add_digits(d);
add=add+diff*(l-1);
add=add_digits(add);
long long sum=0;
for(long long i=0;i<(r-l+1)%9;i++)
{
long long temp=add+diff*(i);
sum+=add_digits(temp);
}
printf("%lld\n",sum+ans);
}
}
return 0;
}