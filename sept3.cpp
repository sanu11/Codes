#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,c=0;
	cin>>n;
	int i=1;
	while(true)
	{
	if(n==0)
	break;
	if(n>=2*i)
	{	
	n=n-2*i;
	i++;
	c+=2;
	}	
	else if(n>=i)
	{
	n=n-i;
	i--;
	c++;
	}
	else if(n<i)
	{
	i=n;
	n=n-i;
	c++;
	}
	}
	printf("%d\n",c);	
	}
    return 0;
}

