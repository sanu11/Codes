#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int sum=0,x=0,c=0,sum2=0;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a[i]=x;
		sum+=x;
	}
	sort(a,a+n);
	reverse(a,a+n);
	for(int i=0;i<n;i++)
	{
		sum2+=a[i];
		sum-=a[i];
		c++;
		if(sum2>sum)
		{
			cout<<c<<endl;
			break;
		}
	}
	return 0;
}