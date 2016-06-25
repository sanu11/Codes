#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	int a[26]={0};
	int c=0;
	for(int i=0;i<n;i++)
	{
		int temp=(int)(s[i]-97);
		++a[temp];
		if(a[temp]==1)
			c++;
	}
	// cout<<c;
	if(c%2==0)
		cout<<"CHAT WITH HER!\n";
	else
		cout<<"IGNORE HIM!\n";

 	return 0;
 }