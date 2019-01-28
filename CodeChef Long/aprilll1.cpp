#include <bits/stdc++.h>
using namespace std;
int main() 
{
int t,n,m,c1,c2,c3;
cin>>t;
while(t--)
{
cin>>n;
int a[3]={0};
char x;
	for(int i=0;i<n;i++)
	{
	cin>>x;
	if(x=='R')
	a[0]++;
	else if(x=='G')
	a[1]++;
	else
	a[2]++;
	}
sort(a,a+3);	
cout<<a[0]+a[1]<<endl;
}
return 0;
}