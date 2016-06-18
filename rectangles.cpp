#include<bits/stdc++.h>
using namespace std;
int main()
{

int n,temp;
long long sum=0;
int i=1;
while(true)
{
	k=i*i;
	sum+=(n-k)/i+1;
	if(k>n)
		break;
}
cout<<sum<<endl;
}