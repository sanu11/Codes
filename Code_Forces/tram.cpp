#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n;
	int sum=0,mx=-99;
	while(n--)
	{
		cin>>a>>b;
		sum=sum+ (b-a);
		if(sum>mx)
			mx=sum;
		// cout<<sum<<" ";
	}
	cout<<mx<<endl;

	return 0;
}