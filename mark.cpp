#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	long long n,diff;
	cin>>n>>diff;
	long long a[n];
	for(long long i=0;i<n;i++)
		cin>>a[i];
	std::vector<long long> v;
	long long i=0;
	long long c=0;
	long long d=0;
	while(a[i]>diff&&i<n)
		i++;

	while(a[i]<=diff&&i<n)
	{
		c++;
		i++;
	}
	if(i==n)
		v.push_back(c);
	
	int flag2=0;
	while(i<n)
	{
	
		if(a[i]>diff&&i<n)
			i++;
		while(a[i]>diff&&i<n)
		{
			i++;
			flag2=1;
		}
		if(flag2==1)
			c=0;

		while(a[i]<=diff&&i<n)
		{
			d++;
			i++;
		}

		v.push_back(c+d);
		d=0;
		c=d;

	}

	long long mx=0;
	for(long long i=0;i<v.size();i++)
		mx=max(mx,v[i]);
	
	for(long long i=0;i<v.size();i++)
	cout<<v[i]<<" ";
	
	cout<<mx<<endl;

}