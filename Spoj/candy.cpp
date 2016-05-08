#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
int avg,sum=0,sum2=0;
while(true)
{
cin>>n;
sum=0;
if(n==-1)
	break;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
sum+=a[i];
}
avg=sum/n;
if(avg*n==sum)
{
sum=0;	
for(int i=0;i<n;i++)
{
sum+=abs(a[i]-avg);
}
cout<<sum/2<<endl;
}
else
cout<<"-1"<<endl;
}
	return 0;
}