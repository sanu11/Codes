#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,x,c=0,b;
	char a;
	cin>>n>>x;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		if(a=='+')
			x+=b;
		else
		 	if(x>=b)
				x-=b;
			else
				c++;
	}
	cout<<x<<" "<<c<<endl;

	return 0;
}