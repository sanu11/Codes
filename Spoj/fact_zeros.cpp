#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t,n,sum=0;	
cin>>t;
while(t--)
{
cin>>n;
sum=0;
for(int i=5;n/i>=1;i*=5)
sum+=n/i;
cout<<sum<<endl;
}
return 0;
}