#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,z,a,b;
while(true)
{

cin>>x>>y>>z;
if(x==0&&y==0&&z==0)
break;
else
{
a=y-x;
b=z-y;
if(a==b)
	cout<<"AP "<<z+a<<endl;

else
{
a=y/x;
b=z/y;
if(a==b)
	cout<<"GP "<<z*a<<endl;
}
}
}
	return 0;
}