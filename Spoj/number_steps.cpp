#include <iostream>
using namespace std;
 
int main()
{
int t,x,y;
cin>>t;
while(t--)
{
	cin>>x>>y;
	 // as point has to be on y=x line or x-y=2 line
	if(x==y||x-y==2)
	{
	if(x%2==0&&y%2==0) 
	cout<<x+y<<endl;
	else if(x%2!=0 &&y%2!=0)
	cout<<x+y-1<<endl;
	}
	else
	cout<<"No Number\n";
}
	return 0;
} 