#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
double p,b=1000000000,temp,z=1,m;
cin>>t;
while(t--)
{
z=1;
cin>>m>>p;
if(m==1)
{
printf("%.2f ",b);
printf("0.0\n");
}
else
{
std::fixed;
double t2=int(m/2);	
z=b*(1-pow(-p,m))/(1+p);					//GP with alternate + and -; a(1-r^n)/1-r;												//new n
printf("%.2f %.2f\n",z,b-z);
}
}
return 0;
}
