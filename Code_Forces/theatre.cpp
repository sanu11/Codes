#include <bits/stdc++.h>
using namespace std;

int main() 
{

	long long n,m,a,sum;
	cin>>m>>n>>a;
	if(m%a!=0)
	sum= (m/a)+1;
	else 
	sum=m/a;
	if(n%a!=0)
	sum=sum*((n/a)+1);
	else
	sum=sum*(n/a);
	cout<<sum<<endl;
	return 0;
}