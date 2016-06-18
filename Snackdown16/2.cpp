#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll t,n,flag=0,sum=0,negflag=1,mn,mx,index=0,temp,x,y;
cin>>t;
while(t--)
{
flag=0;
sum=0;	
negflag=0;
cin>>n;
ll a[n];
ll b[n];
for(int i=0;i<n;i++)	
	cin>>a[i];
negflag=0;
for(int i=0;i<n;i++)
{
if(flag==0)                 // for first neg element
{	
if(a[i]<0)                      //flag=1 skip is done for 1 number
{
	flag=1;
	mn=a[i];
	if(n==1)
		sum+=a[i];
}
else
sum+=a[i];
}

else                           //for other elements
{

if(a[i]<0&&negflag==0)                     //negative number and prev number is non neg ,, either continue or before 
{

if(a[i]<mn)                                 //smaller than min
temp=mn;
else
temp=a[i];

if(b[index]>0)
x=sum-b[index];                        //prev pos total  
else
x=sum+b[index];

y=sum+temp;                       //continue (if prev mn smaller  skip it and add current,,,,else add prev and skip current)

// cout<<"\n"<<a[i]<<endl;
// cout<<"b[index]= "<<index<<" "<<b[index]<<endl;
// cout<<"prev total "<<x<<"  continue "<<y<<" "<<endl;
if(x>y)
{

	sum=x;                    //new patch
	mn=a[i];                   // mn is curent mn now
}
else
{	
	sum=y;                  //continue   ,,chang mn only if a[i]<mns
	if(a[i]<mn)
 		mn=a[i];
}

}	

else  if (negflag==1)                 // if prev number is neg       either continue or start new
{
if(a[i]<0)                            // nxt number neg
{
if(a[i]<mn)                           // number other thn one to be dropped in mn
	temp=mn;
else
	temp=a[i];
}

else
temp=a[i];                            //nxt number pos

x=a[i];                                 // new patch from current
y=sum+temp;                           //continue

if(x>y)                                //new patch                    
{
	sum=x;   
	mn=0;
}
else                    // continue
{
	sum=y;
if(a[i]<mn)
 	mn=a[i];
}

}

else
	sum+=a[i];                 //pos after pos
}

if(a[i]<0)
{
negflag=1;
index=i;
}
else
negflag=0;

b[i]=sum;

//cout<<b[i]<<" ";
}   
 temp=b[0];                       //for end
for(int i=1;i<n;i++)
if(b[i]>temp)
	temp=b[i];
cout<<temp<<endl;
	

}
return 0;
}