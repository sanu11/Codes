#include<bits/stdc++.h>
using namespace std;
void prime(int n)
{
	int i=2;
	while(n%i==2)
	{
		cout<<i;
		n=n/i;
	}
	i++;
	for(int i=3;i<=sqrt(n);i+=2)
	{
		while(n%i==0)
		{
			cout<<i;
			n=n/i;
		}

	}
}
int main()
{
	int n;
	cin>>n;
	prime(n);
	return 0;
}