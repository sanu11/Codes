#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int c=0;
	int n=s.length();
	for(int i=0;i<n;i++)
	{
		if(s[i]=='4'||s[i]=='7')
			c++;
	}
	if(c==4||c==7)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}