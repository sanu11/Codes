#include<bits/stdc++.h>
using namespace std;
int l,r;
int *squared;
int notprime[100000];

void prime()
{ 
	notprime[1]=1;
	notprime[0]=1;
	int n=sqrt(100000);
	for(int i=2;i<=n;i++)
	{
		if(!notprime[i])
		for(int j=i*2;j<=100000;j+=i)
			notprime[j]=1;
	}

}

int check(int n)
{

	int x=sqrt(n);
	int i=2;
	int flag=0;
	int c=0;
	while(n%i==0)
	{
		if(flag==0)
		{
			c++;
			flag=1;
		}
		n=n/i;
	}
	flag=0;
	for(i=3;i<=x;i+=2)
	{
		flag=0;
		while(n%i==0)
		{
			if(flag==0)
			{
				c++;
				flag=1;
			}
			n=n/i;
		}
	}
	if(n>2)
		c++;
	return c;

}

int div(int n)
{
	int m=n;
	int x=sqrt(n);
	int sum=1;
	int i=2;
	int flag=0;
	if(n%i==0)
	{
		if(n%(i*i)!=0)
		{
			sum*=(pow(i,2)-1)/(i-1);
		}
		else
			squared[m]=1;
	
		flag=1;
	
	}

    if(!squared[m])
	{
		if(flag)
			n=n/i;

		for(i=3;i<=x;i+=2)
		{
				
			if(n%i==0)
			{	
				if(n%(i*i)!=0)
					sum*=(pow(i,2)-1)/(i-1);
				else
				{
					squared[m]=1;
					break;
				}
				n=n/i;

			}
		}
		if(!squared[m]&&n>2)
		{
			
			sum*=(pow(n,2)-1)/(n-1);
		}

		return sum;
	}
	else
		return -1;	

}

int main()
{

	int t;
	cin>>t;

	memset(notprime,0,sizeof(notprime));
	
	prime();

	int n=100000;
	int sum[100001]={0};
	long long ans=0;
	squared=new int [100000];
	memset(squared,0,sizeof(squared));
	int temp;
	
	long long total[100001];
	for(int i=1;i<=100000;i++)			
	{

		sum[i]=div(i);
	
		if(!squared[i])
		{
			temp=check(sum[i]);
			if(notprime[temp]==0)
				ans+=sum[i];
		}
		total[i]=ans;
	}

	while(t--)
	{
	
		cin>>l>>r;
		
		cout<<total[r]-total[l-1]<<endl;

	}
 	return 0;
 }