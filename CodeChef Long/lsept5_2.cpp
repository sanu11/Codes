#include<bits/stdc++.h>
using namespace std;
double x2=sqrt(2);
double y2=sqrt(3);
long long i,k;
double s;
double a,b;
void mul()						//i<k
{
std::fixed;		
if((k-i)%2==0)
{
double sum=a+b;	
double no=double((k-i)/2);                //no is power of 16...
double addsub=(4*no-s); 
cout<<setprecision(5); 
                                         //16 in power of 2 so as to subtract 2^s;
cout<<fixed<<pow(2,addsub)*sum;
}
else
{
double no=double((k-i-1)/2);
double sec=2*x2*(a+y2*b);          //n+1th term..
double addsub=(4*no-s);            
cout<<setprecision(5);
cout<<fixed<<pow(2,addsub)*sec;
}
}
void div()					//i>k
{
std::fixed;	
double sum=a+b;
if((i-k)%2==0)
{
double no=double((i-k)/2);
double addsub= -(4*no+s);
           //divide by 16
cout<<setprecision(5);
cout<<fixed<<pow(2,addsub)*sum;
}
else
{
double sec=(a+y2*b)/(4*x2);
double no=double((i-k-1)/2);
double addsub= -(4*no+s);
cout<<setprecision(5);
cout<<fixed<<pow(2,addsub)*sec;
}
}
int main()
{
scanf("%lld%lld%lf",&i,&k,&s);
scanf("%lf%lf",&a,&b);
if(i<=k)
mul();	
else
div();
return 0;
}