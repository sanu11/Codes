#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	int flag=0;
	while(n--)
	{
		if(s[n]=='H'||s[n]=='Q'||s[n]=='9')
		{
			cout<<"YES\n";
			flag=1;
			break;
		}

	}
	if(! flag)
		cout<<"NO\n";
	return 0;
}