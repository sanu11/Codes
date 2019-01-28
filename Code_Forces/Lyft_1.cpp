
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t,x,y,n,d1,d2,x1,y1,x2,y2;
		cin>>n;
		cin>>x>>y;
		x1=x-1;
		y1=y-1;
		x2=n-x;
		y2=n-y;
		if(x1>y1)
			d1=x1;
		else
			d1=y1;

		if(x2>y2)
			d2=x2;
		else
			d2=y2;

		// d2 winner
		if(d1>d2)
			cout<<"Black"<<endl;
		else if(d1<d2)
			cout<<"White"<<endl;
		else
			cout<<"White"<<endl;

	return 0;
}