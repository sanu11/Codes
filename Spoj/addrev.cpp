#include <bits/stdc++.h>
using namespace std;
int reverse(int a)
{
	int ans=0,rem=0;
	rem=a%10;
	while(a)
	{
	ans=ans*10+rem;
	a=a/10;
	rem=a%10;
	}
return ans;	
}
int main() 
{
int n,x,y,sum;
cin>>n;
while(n--)
{
	cin>>x;
	cin>>y;
	cout<<reverse(reverse(x)+reverse(y))<<endl;
}
	return 0;
}