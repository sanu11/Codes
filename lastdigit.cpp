#include<bits/stdc++.h>
using namespace std;
int main()
{
long long a,b,temp;
cin>>a>>b;
int x[5];
temp=1;
for(int i=1;i<4;i++)
{
temp=temp*a;	
x[i]=temp%10;
// cout<<x[i]<<" ";
}
for(int i=0;i<4;i++)
cout<<x[i]<<endl;
x[0]=temp*a%10;
// cout<<x[b%4];
	return 0;
}