#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int mx=-1;
		int diff;
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
			{
				 diff=abs(a[i]-a[j]);
				if(diff>mx)
					mx=diff;

			}

			int count=0;
			for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
			{
				diff=abs(a[i]-a[j]);
				if(mx==diff)
					count++;
			}
			cout<<count<<endl;
			




	
	}

    return 0;
}