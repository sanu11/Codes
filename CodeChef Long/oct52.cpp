#include <bits/stdc++.h>
using namespace std;
vector<int>hypo;
void prime()
{
int n=5000000;
int a[n+1]={0};
for(int i=2;i<=n;i++)	
{
int flag=0;	
if(a[i]==0)
{
if((i-1)%4==0)
{
hypo.push_back(i);
flag=1;
}
int k=2;	
while(true)
{
	int j=i*k;
if(j>n)
break;
	//cout<<i<<endl;
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
scanf("%d%d",&t,&n);
prime();
for(int i=0;i<hypo.size();i++)
cout<<hypo[i]<<" ";
if(find(hypo.begin(),hypo.end(),n)!=hypo.end())
printf("YES");
else
printf("NO");
	return 0;
}
