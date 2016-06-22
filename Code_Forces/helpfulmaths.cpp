#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s;
	cin>>s;
	int len=s.length();
	n=len/2+1;
	int k=0;
	int b[n];
	for(int i=0;i<len;i+=2)
	{
		b[k]=s[i]-'0';
		k++;
	}
	sort(b,b+n);
	for(int i=0;i<n-1;i++)
		cout<<b[i]<<"+";
	cout<<b[n-1]<<endl;
	return 0;
}