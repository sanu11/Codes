#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long a[n];
		for(long long i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		long long c=1;
		long long d=1;
		long long temp=a[0];
		long long temp2=a[n-1];
		long long i=1;
		if(n==1)
			cout<<"0\n";
		else if(a[0]==a[n-1])
		{
			cout<<(n*(n-1))/2<<endl;
		}
		else
		{
		while(a[i]==temp&&i<n)
		{
			c++;
			i++;
		}
		i=n-2;
		while(a[i]==temp2&&i>=0)
		{
			d++;
			i--;
		}
		cout<<c*d<<endl;
	
		}
	}

    return 0;
}