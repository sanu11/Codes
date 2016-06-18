#include<bits/stdc++.h>
using namespace std;
int main()
{

int n,temp;
long long sum=0,k;
int i=1;
cin>>n;
while(true)
{
	k=i*i;
	if(k>n)
		break;
	temp=(n-k)/i+1;
	sum+=temp;
i++;
}
//sum++;
cout<<sum<<endl;
}