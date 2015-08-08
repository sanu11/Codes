#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,h,temp,temp2;
	cin>>n>>h;
	int a[n];
	for(int j=0;j<n;j++)
	a[j]=0;
	for(int j=0;j<n;j++)
	{
		cin>>temp>>temp2;
		for(int i=temp;i<=temp2;i++)
		a[i]++;
	}
	int k,c=0,mx=999999999;
	for(int j=0;j<h;j++)
	{
		c+=n-a[j];
	}
	for(int i=1;i<n-h+1;i++)
	{
	   c-=n-a[i-1];
	   c+=n-a[i+h-1];
     mx=min(mx,c);
	}
	cout<<mx<<"\n";
	}
	return 0;
}
