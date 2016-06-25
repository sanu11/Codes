#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	int x;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		a[x]=i;
	}
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
	cout<<endl;

	return 0;
}