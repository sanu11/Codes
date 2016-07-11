#include<bits/stdc++.h>
using namespace std;
char * fun(char *ptr)
{
// ptr[1]='r';	
ptr+=3;
return ptr; 
}

int main()
{
	double a=-3.6,b=3.6;
	cout<<ceil(a)<<" "<<floor(a)<<endl;
	cout<<ceil(b)<<" "<<floor(b)<<endl;
	char *x="Hello";
	char *y=fun(x);
	cout<<y<<" "<<x;
	return 0;

}
