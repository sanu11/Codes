#include <bits/stdc++.h>
using namespace std;
bool vis[100002],vis2[100002];
int PrimeCountArray[100002];
long long ans[100002];
void PrecomputePrime2()
{

	memset(vis2,false,sizeof(vis2));

		vis2[0]=vis2[1]=true;

	for(int i=2;i*i<=100000;i++)
	{
		if(vis2[i]==false)
		{
			for(int j=2;j*i<=100000;j++)
			{
				vis2[i*j]=true;
			}
		}
	}
}
void PrecomputePrime()
{
	
	memset(vis,false,sizeof(vis));
	for(int i=2;i*i<=100002;i++)
	{
		int temp=i*i;
		if(vis[temp]==false)
		{
			for(int j=1;j*temp<100002;j++)
				vis[temp*j]=true;
		}
	}

}
int find(int n)
{
	int PrimeCount=0;
	if(n%2==0)
	{
		PrimeCount++;
		while (n%2 == 0)
    	{
     	    n = n/2;
  	 	}
	}

    for (int i = 3; i <= sqrt(100000)&&(n!=1); i = i+2)
    {
    	if(n%i == 0)
    	{
    		PrimeCount++;

        	while (n%i == 0)
        	{
        	    n = n/i;
        	}
        }	
    }

    if(n>2)
    {
    	PrimeCount++;
    }
    return PrimeCount;
}
void getDetails(int n)
{
	int PrimeCount=1,Total=1,temp=0;
	int i=n;

	if(n%2==0)
	{
		PrimeCount++;
		temp=1;
		while (n%2 == 0)
    	{
    		temp*=2;
    		Total+=temp;
     	    n = n/2;
  	 	}
	}

    for (int i = 3; i <= sqrt(100000) &&(n!=1); i = i+2)
    {
    	if(n%i == 0)
    	{
    		PrimeCount++;
    		int total2=1;
    		temp=1; 
        	while (n%i == 0)
        	{
        	
        		temp*=i;
        		total2+=temp;
        	    n = n/i;
        	}
        	Total*=total2;
        }	
    }

    if(n>2)
    {
    	PrimeCount++;
    	Total*=(1+n);
    }

    	ans[i]=Total;
    	PrimeCountArray[i]=find(Total);
  //  	cout<<i<<" "<<Total<<" "<<PrimeCountArray[i]<<endl;
}
void PrecomputePrimeFactorAndSum()
{
	for(int i=1;i<=100000;i++)
	{
		if(vis[i])
		{
			ans[i]=0;
		}
		else
		{
			getDetails(i);
		}
	}
}
void CumulativeSum()
{
	long long Total=0;
	ans[0]=ans[1]=0;
	for(int i=2;i<=100000;i++)
	{
		// if(i==5)
		// {
		// 	cout<<"aaa"<<endl;
		// 	cout<<PrimeCountArray[i]<<endl;
		// 	cout<<vis2[PrimeCountArray[i]]<<" "<<vis[i]<<endl;
		// }
		if((!vis2[PrimeCountArray[i]])&&(!vis[i]))
		{
			Total+=ans[i];

	//		cout<<i<<" "<<Total<<endl;
		}
		ans[i]=Total;

	}
}
int main()
{
	int t,l,r;
	PrecomputePrime();
	PrecomputePrime2();
	PrecomputePrimeFactorAndSum();
	CumulativeSum();
	cin>>t;
	ans[0]=0;
	while(t--)
	{
		cin>>l>>r;
		cout<<ans[r]-ans[l-1]<<endl;
	}	
}