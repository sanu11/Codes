#include<bits/stdc++.h>
using namespace std;
int main()
{

	int  k,n,w;
	cin>>k>>w>>n;
	int sum = k*n*(n+1)/2;
	cout<<max(sum-w,0)<<endl;

	return 0;
}