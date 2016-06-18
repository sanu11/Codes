#include <bits/stdc++.h>
#define ll long long
using namespace std;
   int gcd(int a,int b)
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
	ll a,b,c,d;	
	while(t--)
	{
		cin>>a>>b>>c>>d;
			if(!(c&1)&&(d&1))				// 1 is odd other is even
				cout<<"0"<<endl;
			else if((c&1)&&!(d&1))			// 1 is odd other is even
				cout<<"0"<<endl;
			else if(!(c&1)&&!(d&1))			// both even
			{
				if(!(a&1)&&!(b&1))					// both a and b are even
					cout<<"0"<<endl;
				if((a&1)&&(b&1))					// both a and b are odd
					cout<<"0"<<endl;
				else
					cout<<"1"<<endl;			
			}
			else 							// if c and d both are odd
			{
				if(c==d)	
					cout<<min(abs(a-b)%c,c-abs(a-b)%c)<<endl;
				else if(!(abs(a-b)%gcd(c,d)))
					cout<<"0"<<endl;
				else 
					cout<<"1"<<endl;
			}	
	}
	return 0;
		
}