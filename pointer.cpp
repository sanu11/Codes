#include<bits/stdc++.h>
using namespace std;
int main()
{
	char b[2][6]={"hello","hell"};
	cout<<b<<" "<<&b[0]<<" "<<&b<<" "<<b[1]<<" "<<&b[1]<<endl;
	
	char *a[2]={"Hello","Hell"};
	cout<<a<<" " <<&a[0]<<" " <<&a<<" "<<*a<<endl;

	char **c;
	c=new char* [2];
	c[0]="HELLO";
	c[1]="HELL";
	cout<<c<<" " <<&c[0]<<" " <<&c<<" ";

}
