#include <iostream>
using namespace std;

int main() 
{
	int x=0,n;
	cin>>n;
	string s;
	while(n--)
	{
		cin>>s;
		if(s=="++X"||s=="X++")
			x++;
		else if(s=="--X"||s=="X--")
			x--;
	}
	cout<<x<<endl;
	return 0;
}