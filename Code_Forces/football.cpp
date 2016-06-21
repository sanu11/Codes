#include <iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	char x;
	int n=s.length();
	int i=0;
	int c=0,d=0;
		int flag=0;
		while(i!=n)
		{
		x=s[i];
		c++;
		i++;
		while(s[i]==x)
		{
			c++;
			i++;
		}
		
		if(c>=7)
		{
		cout<<"YES\n";
		flag=1;
		break;
		}
		else
		c=0;
		}
		if(!flag)
			cout<<"NO\n";
	return 0;
}