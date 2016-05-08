#include<bits/stdc++.h>
using namespace std;
int main()
{
	int flag=1;
	int diff;
cout<<"1"<<endl;
cout<<"2 "<<"1 2"<<endl;
cout<<"3 "<<"3 4 5"<<endl;
cin>>diff;
if(diff ==0)
{
cout<<"1"<<endl;
cout<<"1 "<<"1"<<endl;
cout<<"1 "<<"2"<<endl;
cin>>diff;
if(diff==1)
	cout<<"2\n1"<<endl;
else if(diff==-1)
	cout<<"2\n2"<<endl;
}
else if(diff==-2)
{
cout<<"1"<<endl;
cout<<"1 "<<"3"<<endl;
cout<<"2 "<<"4 5"<<endl;
cin>>diff;
if(diff==0)
cout<<"2\n3"<<endl;
else if(diff ==-2)
{
cout<<"1"<<endl;
cout<<"1 "<<"4"<<endl;
cout<<"1 "<<"5"<<endl;
cin>>diff;
if(diff==1)
	cout<<"2\n4"<<endl;
else if(diff==-1)
	cout<<"2\n5"<<endl;
}
}
	return 0;
}	