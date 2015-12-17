#include<bits/stdc++.h>
using namespace std;
double ret[2];
double x=sqrt(2);
double y=sqrt(3);
void cal(double a,double b)
{	
ret[0]=x*(a+b)-x*y*(a-b);
ret[1]=x*(a-b)+x*y*(a+b);
}
void cal2(double a,double b)
{
ret[0]=(a*(1-y)+b*(y+1))/8*x;
ret[1]=(a*(y+1)+b*(y-1))/8*x;
}
int main()
{
int i,k;
double s;
double a_i,b_i;
scanf("%d%d%lf",&i,&k,&s);
scanf("%lf%lf",&a_i,&b_i);
if(i<=k)
{
ret[0]=a_i;
ret[1]=b_i;
for(int t=i;t<k;t++)	
{	
a_i=ret[0];
b_i=ret[1];
cal(a_i,b_i);
}
}
else if(i>k)
{
ret[0]=a_i;
ret[1]=b_i;	
for(int t=i;t>k;t--)
{
a_i=ret[0];
b_i=ret[1];
cal2(a_i,b_i);
}
}
cout<<fixed;
cout<<setprecision(15);
cout<<(ret[0]+ret[1]/pow(2,s));
return 0;	
}