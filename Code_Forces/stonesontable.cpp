#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	char temp=s[0];
	int c=0;
	for(int i=1;i<n;i++)
	{
		if(s[i]==temp)
			c++;
		else 
			temp=s[i];
	}
	cout<<c<<endl;
	return 0;
}