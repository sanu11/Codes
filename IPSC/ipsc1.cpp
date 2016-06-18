#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 	int t;
 	cin>>t;
 	while(t--)
 	{
	 	string s[10];
	 	int c[4];
	 	int flag=0;
	 	int k=0;
	 	for(int i=0;i<10;i++)
			cin>>s[i];


			string a="";
			for(int i=0;i<10;i++)
				a=a+s[i];

	a=a+"XY";
	cout<<a<<endl;
	}
	return 0;
 }