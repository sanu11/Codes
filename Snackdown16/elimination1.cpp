#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	ll a[3];
	ll x,y,c,d,temp,temp2,flag=0;
	while(t--)
	{
		flag=0;
		cin>>x>>y>>a[0]>>a[1]>>a[2];
		int k=3;
		if((a[0]+a[1]+a[2])==x*y)
		{
			while(k--)
			{
				c=0;
				d=0;
				if(a[k]%x==0)
				{

					temp=a[k]/x;
					temp2=y-temp;
					for(int i=0;i<3;i++)
					{
						if(a[i]%temp2==0&&i!=k)
							c++;
						else if(a[i]%x==0&&i!=k)
							d++;
					}
					if(c==2||d==2)
						flag=1;		
				}
				c=0;
				d=0;
				 if(a[k]%y==0)
				 {
					temp=a[k]/y;
					temp2=x-temp;
					for(int i=0;i<3;i++)
					{
						if(a[i]%temp2==0&&i!=k)
							c++;
						else if(a[i]%y==0&&i!=k)
							d++;
					}
				if(c==2||d==2)
					flag=1;
				}
		}
			
			if(flag)
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
		else cout<<"No\n";
	}
return 0;
}