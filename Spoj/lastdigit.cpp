#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
long long a,b,temp;
cin>>a>>b;
if(a==0)
    cout<<"0"<<endl;
else if(b==0)
	cout<<"1"<<endl;
else
{
int x[5];
temp=1;
for(int i=1;i<4;i++)
{
temp=temp*a;	
x[i]=temp%10;
}
x[0]=temp*a%10;
cout<<x[b%4]<<endl;
}
}
	return 0;
}