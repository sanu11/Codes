#include<bits/stdc++.h>
using namespace std;
int main()
{
	int d;
	int a[4];
	for(int i=0;i<4;i++)
		cin>>a[i];
	cin>>d;
	sort(a,a+4);
	int vi[d]={0};
	int c=0;
	for(int i=a[0];i<=d;i+=a[0])
	{
		vi[i]=1;
		c++;
	}
	// cout<<c<<endl;
	if(a[1]%a[0]!=0)
	{

		for(int i=a[1];i<=d;i+=a[1])
			if(!vi[i])
			{
				vi[i]=1;
				c++;
			}
	}
	// cout<<c<<endl;
	if(!(a[2]%a[1]==0||a[2]%a[0]==0))
	{

		for(int i=a[2];i<=d;i+=a[2])
			if(!vi[i])
			{
				vi[i]=1;
				c++;
			}
	}
// cout<<c<<endl;
	if(!(a[3]%a[2]==0||a[3]%a[1]==0||a[3]%a[0]==0))
	{

		for(int i=a[3];i<=d;i+=a[3])
			if(!vi[i])
			{
				vi[i]=1;
				c++;
			}
	}
cout<<c<<endl;
	return 0;
}