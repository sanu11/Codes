#include <bits/stdc++.h>
using namespace std;
vector<int>hypo;
void prime()
{
int n=20;
int a[n+1]={0};
for(int i=2;i<=n;i++)	
{
//cout<<i<<" ";
int flag=0;	
if(a[i]==0)
{
if((i-1)%4==0)
{
hypo.push_back(i);
flag=1;
}
int k=2,j=2*i,num=i;
while(j<=n)
{
	j=num*k;
	a[j]=1;
	if(flag==1)
	hypo.push_back(j);
	k++;
}
}
}
}
int main()
{
int t,n;	
prime();
for(int i=0;i<hypo.size();i++)
cout<<hypo[i]<<" "<<endl;
	return 0;
}
