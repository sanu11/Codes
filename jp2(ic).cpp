#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m;
	cin>>n>>m;
	vector<long long>v(n),b(n);
	for(long long i=0;i<n;i++)
		cin>>v[i];
	for(long long i=0;i<n;i++)
		cin>>b[i];
	char c;
	long long x;
	long long y=m;
	long long id=-1;
	long long temp,flag=0;
	while(m--)
	{
		cin>>c;
		cin>>x;
		x=x%n;
		if(c=='L')
		{
			for(long long i=0;i<x;i++)
			{
				temp=v[0];
				v.erase(v.begin());
				v.push_back(temp);

			}
		}
		else
		{
		for(int i=0;i<x;i++)
		{
			temp=v[n-1];
			v.erase(v.end()-1);
			v.insert(v.begin(),temp);
		}
		}	
		// for(int i=0;i<n;i++)
		// 	cout<<v[i]<<" ";
		// cout<<endl;

		long long count=0;
		for(long long i=0;i<n;i++)
			if(v[i]==b[i])
				count++;
			if(count==n&&flag==0)
			{
				id=y-m;
				flag=1;
			}

	}
	cout<<id<<endl;
	return 0;
}