#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int x,y,z,d=0,c=0;
	while(n--)
	{
		d=0;
		cin>>x>>y>>z;
		if(x==1)
			d++;
		if(y==1)
			d++;
		if(z==1)
		d++;
		if(d>=2)
		c++;
	}
	cout<<c<<endl;

	return 0;
}