#include <bits/stdc++.h>
using namespace std;
void disp(int i,int j)
{
			if(i<=9)
			cout<<"0"<<i<<":";
			else
			cout<<i<<":";
			if(j<=9)
			cout<<"0"<<j<<"\n";
			else
			cout<<j<<"\n";
}
int main() 
{
int t;
scanf("%d",&t);
while(t--)
{
	float a;
	cin>>a;
	for(int i=0;i<12;i++)
	for(int j=0;j<60;j++)
	{
		float temp=fabs(30*i-5.5*j);
		if(a==temp)
		{
		//cout<<a<<" "<<temp<<"\n";
	    disp(i,j);
		}
		if(temp>180&& 360-a==temp)
		{
		//fabs(30*i-2.5*j)
		disp(i,j);
		//cout<<a<<" "<<temp<<"\n";
		}
	}
}
	return 0;
}
