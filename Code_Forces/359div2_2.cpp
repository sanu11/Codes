#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int  i=1;i<=n;i++)
		cin>>a[i];
	int i=1,c=0,x,y;
	int flag=0;
	while(true)
	{
		flag=0;
		if(a[i]<=a[i+1])
		{
			i++;
			c++;
		}
		else
		{
			flag=1;
			x=i;

			if(i>n)
				i=i-2;
			while(i<n&&a[i]>=a[i+1])
			{
				swap(a[i],a[i+1]);
				i+=2;
			}
			// cout<<x<<" x" <<i<<endl;
			i--;
			if(i>n)
				i--;
			y=i;
			 // cout<<i<<endl;
				cout<<x<<" "<<y<<endl;
		}

		if(c==(n-1)&&i==n)
			break;

		else if(i>=n)
		{
			c=0;
			i=1;
		}
		else if(flag)
			i=1;
	}

	return 0;
}