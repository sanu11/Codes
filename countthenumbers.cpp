#include<bits/stdc++.h>
using namespace std;
int cumsum[1001];

void cumsum1()
{
	for(int k=1;k<=1000;k++)
	{
		int i=10;
		int flag=0;
		int n=k;
		while(n)
		{
			
			if(n%i==1||n%i==2||n%i==3||n%i==4||n%i==5)
			{}
			else
			{
				flag=1;
				cumsum[k]=1;
				break;
			}
			n=n/i;
			
		}

	}
}

int main()
{
	int t;
	cin>>t;
	memset(cumsum,0,sizeof(cumsum));
	cumsum1();
	int vi[1001]={0};
	int c=0;
// for(int i=100;i<=120;i++)
// 	cout<<cumsum[i]<<" ";

	for(int i=1;i<=1000;i++)
		{
		if(!cumsum[i])
			c++;
			vi[i]=c;
		}
		while(t--)
		{
		int n;
		cin>>n;
		cout<<vi[n]<<endl;
		}
	return 0;
}