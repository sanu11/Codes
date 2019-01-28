#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
long long n,q;
    scanf("%lld %lld",&n,&q);
    vector<long long>a(n);
    for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);
    long long k,x,t;
    vector<long long>::iterator p;
    while(q--)
    {
        scanf("%lld %lld %lld",&x,&k,&t);
        if(t==0)
        {
        int g=0;
           p=find(a.begin(),a.end(),x);
            if(p!=a.end())
            {
            int y=p-a.begin();
            if((y+k)>(n-1))
            cout<<"-1"<<endl;
            else
            cout<<a[y+k]<<endl;
            }
            else
          	{
      	 	  for(int i=0;i<n;i++)
      	 	  {
      	 	  if(a[i]>x)
      	 	  {
      	 	  if(i+k-1>n-1)
      	 	  cout<<"-1\n";
      	 	  else
      	 	  cout<<a[i+k-1]<<endl;
      	 	  g=1;
      	 	  break;
      	 	  }
         	}
         	if(g==0)
         	cout<<"-1\n";
      	}
      }      
        else if(t==1)
         {
            
            p=find(a.begin(),a.end(),x);
            if(p!=a.end())
            {
            int y=p-a.begin();
            if((y-k)<0)
            cout<<"-1"<<endl;
            else
            cout<<a[y-k]<<endl;
            }
            else
          {
          int g=0;
      	 	  for(int i=n-1;i>=0;i--)
      	 	  {
      	 	  if(a[i]<x)
      	 	  {
      	 	   if(i-k+1<0)
      	 	   cout<<"-1\n";
      	 	   else
      	 	  cout<<a[i-k+1]<<endl;
      	 	  g=1;
      	 	  break;
      	 	  }
       		  }
        if(g==0)
        cout<<"-1\n";
        	         
         }
         
    }
    }
    return 0;
}

