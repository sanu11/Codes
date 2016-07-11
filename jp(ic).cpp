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
	long long count=0,c2=0;
	long long x;
	long long y=m;
	long long id=-1;
	long long temp,flag=0,flag2=0;
	while(m--)
	{
		count=0;
		flag2=0;
		cin>>c;
		cin>>x;
		x=x%n;
		if(c=='L'||c=='l')
		{
			c2=c2+n-x;
			c2=c2%n;
		}
		else
		{
			c2+=x;
			c2=c2%n;
		}
		// cout<<c2<<" ";
	long long k=0;	
		for(long long i=c2;i<n;i++)
		{
			if(b[(c2+k)%n]==v[k])
				count++;
			else
			{
				flag2=1;
				break;
			}
			k++;
		}
		if(flag2==0&&flag==0)
		{
			id= y-m;
			flag=1;
		}
	}
	cout<<id<<endl;	
	return 0;
}
