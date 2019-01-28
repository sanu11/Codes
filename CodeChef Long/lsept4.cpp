#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,m;
double p,b=1000000000,z=1;
cin>>t;
while(t--)
{
z=1;
cin>>m>>p;
if(m>2)
{
m--;
z=pow(p,m-1)-pow(p,m);
for(int i=m-2;i>=0;i--)    //1-(.5-(.5^2-.5^3))series..
z=pow(p,i)-z;
m++;
}
cout<<z<<" ";
if(m==2)
z=(b-p*b);	
else
z=z*b;
printf("%.12f %.12f\n",z,b-z);
}
return 0;
}
