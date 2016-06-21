#include <iostream>
using namespace std;

int main()
{
	int n,x;
	cin>>n;
	int a[5]={0};
	while(n--)
	{
	cin>>x;
	a[x]++;
	}
	
	int sum;
	sum+=a[4];
	int flag=0;
	if(a[2]%2==0)
	sum+=a[2]/2;
	else
	{
	sum+=a[2]/2 +1;	
	flag++;
	}
	
	if(a[1]<a[3])
	{
	sum+=a[1];
	sum+=a[3]-a[1];
	}
	else if(a[1]>a[3])
	{
		int temp=(a[1]-a[3]);
		sum+=a[3];
		sum+=temp/4;
		if(temp%4!=0)
		sum+=1;
		if(temp%4==2||temp%4==1)
		flag++;
	}
	else if(a[1]==a[3])
	sum+=a[1];
	
	if(flag==2)
	sum--;
	cout<<sum<<endl;
	return 0;
}