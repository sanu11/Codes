#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int even(int temp,int k)
{
	int a=0;
	int c=0;
   while(temp<k)
    {
   	temp=temp*2;
	c++;
	}
    if(temp==k)
	a=1;
if(a==1)
return c;
else
return 0;
}
 
int odd(int temp)
{
 
}
 
int main()
{
int t;
cin>>t;
while(t--)
{
int n,k;
int c=0;
cin>>n>>k;
if(n==k)
cout<<"0\n";
else
{
int temp=n;	
while(true)
{
if(temp%2==0||temp==1)
{
int x=even(temp,k);
if(x!=0)
{
cout<<x+c<<"\n";
break;
}
else
{
//cout<<"divideby2"<<temp;	
temp=temp/2;
c++;
}
}
else
{
temp=(temp-1)/2;
c++;
}
}
}
}
return 0;
}
