#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int l,r;
	int arr[n+1]={0};
	int k=1;
	for(int i=1;i<=m;i++)
	{
		cin>>l>>r;
		arr[l]+=k;	
		arr[r+1]+=-k;
		k++;
	}


	for(int i=2;i<=n;i++)
		arr[i]+=arr[i-1];

	// for(int i=1;i<=n;i++)
	// 	cout<<arr[i]<< " ";
int d;
cin>>d;
for(int i=1;i<=n;i++)
{
	int flag=0;
	int c=0;
	int mx=-9;
	
	for(int j=1;j<=d;j++)
	{

		if((i+j)<=n)
		if(a[i+j]>a[i]&&arr[i+j]!=arr[i])
		{
			if(a[i+j]>mx)
			{
				c=1;
				mx=a[i+j];
			}
			else if(a[i+j]==mx)
				c++;
			flag=1;
		}
		if((i-j)>=1)
		if(a[i-j]>a[i]&&arr[i-j]!=arr[i])
		{
			if(a[i-j]>mx)
			{
				mx=a[i-j];
				c=1;
			}
			else if(a[i-j]==mx)
				c++;

			flag=1;
		}
	}
	if(!flag)
		cout<<"-1";
	else
		cout<<mx<<" "<<c;
	cout<<endl;
}

}