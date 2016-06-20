#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a ,ll b)
{
	
	if(b==0)
		return a;
	if(a>b)
		return gcd(b,a%b);
	return  gcd(a,b%a);

}

int main()
{
	int t;
	cin>>t;
	ll c,n,min,g,l,a,b,x,y,flag,temp2;
	while(t--)
	{
		cin>>n>>c;
		
		if(n==1)
			cout<<"Yes\n";
		else
		{
			x=0;
			flag=0;
			a=n;
			b=n*(n-1)/2;
			min=n*(n+1)/2;
			if(c>=min)
			{
				g=gcd(a,b);
				if(c%g==0)
				{
				l=(a*b)/g;
				temp2=c/l+1;
				if(c%a==0)
					x++;
				if(c%b==0)
					x++;

				if(temp2>x)
					cout<<"Yes\n";
				else
					cout<<"No\n";
				}
				else cout<<"No\n";
			}
			else 
				cout<<"No\n";
		}
	}
return 0;
}