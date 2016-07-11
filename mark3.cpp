#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int c=0;
	long long n,diff;
	cin>>n>>diff;
	long long a[n];
	for(long long i=0;i<n;i++)
		cin>>a[i];
	int i=0;
	while(a[i]<=diff&&i<n)
	{
		i++;
		c++;
	}

	if(a[i]>diff)
		i++;
	
	while(a[i]<=diff&&i<n)
	{
		i++;
		c++;
	}

	cout<<c<<endl;

}