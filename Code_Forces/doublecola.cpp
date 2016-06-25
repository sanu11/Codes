#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp;
	cin>>n;
	int i=1;
	while(true)
	{
		temp=5*i;;
		if(temp<n)
		n=n-temp;
		else
			break;
		i*=2;
	}
	// cout<<n<<" " <<i<<endl;
	temp=n/i;
	if(n%i!=0)
		temp++;
	if(temp==1)
		cout<<"Sheldon\n";
	else if(temp==2)
		cout<<"Leonard\n";
	else if(temp==3)
		cout<<"Penny\n";
	else if(temp==4)
		cout<<"Rajesh\n";
	else if(temp==5)
		cout<<"Howard\n";
	return 0;
}