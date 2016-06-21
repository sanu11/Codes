#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
	cin>>s;
	int n=s.length();
	for(int i=0;i<n;i++)
	{
		if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='I'||s[i]=='i'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'||s[i]=='y'||s[i]=='Y')
		{}
		else 
			cout<<"."<<(char)tolower(s[i]);
	}
	
	return 0;
}