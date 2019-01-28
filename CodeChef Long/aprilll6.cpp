#include <bits/stdc++.h>
using namespace std;
#define max 1000000007
int main() 
{
typedef   long long ll;
ll t,k,a;
string s;
cin>>t;
while(t--)
{
cin>>a>>k;
cin>>s;
if(a==1)
	if(s.length()<=2)
		cout<<"1\n";
	else
		cout<<"0\n";
}
return 0;
}