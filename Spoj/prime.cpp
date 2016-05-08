#include<bits/stdc++.h>
using namespace std;
#define max 40000
bool num[40001];
vector<int>primes;
void prime()
{
num[1]=0;
for(int i=2;i<=max;i++)
{	
if(num[i])
{
for(int j=i*i;j<=max;j+=i)
	{
		num[j]=0;
	}
primes.push_back(i);
}
}
}

bool isprime(int i)
{
	if( i <=max)
		return num[i];

for(int k=0;k!=primes.size();k++)
	if(i%primes[k]==0)            //4203 primes till 40,000
		return 0;

return 1;
}
int main()
{
int n,m,t;
scanf("%d",&t);
memset(num,1,sizeof(num));
prime();
while(t--)	
{
scanf("%d%d",&n,&m);
for(int i=n;i<=m;i++)            //n-m<=10^5         worst case :- 10^5 * 10^3
{
	if(isprime(i))
		printf("%d\n",i);
}
if(t!=0)
printf("\n");
}
	return 0;
}