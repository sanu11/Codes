#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;

while(true)
{
string s;
cin>>n;
if(n==0)
break;
cin>>s;
int k=0;
int len=s.length();
int i=0;
int ad;	
while(n)
{
	ad=n*2-1;
	cout<<s[i];
	while(i<len)
	{
		i+=ad;
		if(i<len)
		cout<<s[i];
		i=i+k*2+1;
		if(i<len)
		cout<<s[i];
	}
	k++;
	i=k;
	n--;
}
cout<<endl;
}

	return 0;

}