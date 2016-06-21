#include <iostream>
using namespace std;

int main() 
{
	int n,k,y,z,flag=0,c=0;
	cin>>n>>k;
	int x;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(flag==1&&x==z&&x>0)
			c++;
		if(i!=k&&x>0&&flag==0)
			c++;
		else if(i==k&&x>0)
		{
			z=x;
			c++;
			flag=1;
		}
	
	}
	cout<<c<<endl;


	return 0;
}