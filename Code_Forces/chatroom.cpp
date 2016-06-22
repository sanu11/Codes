#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int fun(char x,int i)
{
	while(s[i]!=x)
	{
	if(i<=n-1)
		i++;
	else
		return -1;
	}
	i++;
return i;
}
int main()
{
	cin>>s;
	 n=s.length();
	int i=0,flag=0;
	while(i!=n)
	{	
		i=fun('h',i);
		if(i==-1)
		{
			flag=1;
			break;
		}

		i=fun('e',i);
		if(i==-1)
		{
			flag=1;
			break;
		}
		
		i=fun('l',i);
		if(i==-1)
		{
			flag=1;
			break;
		}

		i=fun('l',i);
		if(i==-1)
		{
			flag=1;
			break;
		}
		
		i=fun('o',i);
		if(i==-1)
		{
			flag=1;
			break;
		}
		
		if(!flag)
			break;
	}
	if(flag)
		cout<<"NO\n";
	else
		cout<<"YES\n";
	return 0;
}