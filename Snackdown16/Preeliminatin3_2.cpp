#include <bits/stdc++.h>
#define ll long long
using namespace std;
   ll gcd(ll a,ll b)
    {
    	//cout<<a<<" "<<b<<endl;
    	if(b==0)
    		return a;
    	return gcd(b,a%b);
     }
int main()
{
	int t;
	cin>>t;
	ll a,b,c,d,temp,diff,temp2;	
	while(t--)
	{
		cin>>a>>b>>c>>d;
		temp= gcd(c,d);
		diff= abs(a-b);
			if(diff>temp)
			{
				temp2=diff%temp;
				cout<<min(temp2,temp-temp2)<<endl;
			}
			else
					cout<<min(diff,temp-diff)<<endl;		
		}
	return 0;
}
