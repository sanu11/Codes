#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int flag=0;
	int n=s.length();
	for(int i=1;i<n;i++)
	{
		if(!isupper(s[i]))
			flag=1;
	}
	if(!flag)
	{
		for(int i=0;i<n;i++)
		{

			if(isupper(s[i]))
				cout<<(char)tolower(s[i]);
			else
				cout<<(char)toupper(s[i]);
		}

	}
	else
		cout<<s<<endl;
	return 0;
}