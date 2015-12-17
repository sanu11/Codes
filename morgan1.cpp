#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
int t;
    scanf("%d",&t);
while(t--)
{
int n;
vector<int>v(n+1);    
vector<int>mx(n+1);
vector<int>up(n+1);
    scanf("%d",&n);
for (int i=1;i<=n;i++)    
    scanf("%d",&v[i]);
long long sum=abs(v[1]-v[n]);
    mx[1]=abs(v[1]-v[n]);
   int temp,temp2;
    for (int i=2;i<=n/2;i++)
    {
   mx[i]=abs(v[i]-v[n-i+1]);
   if(v[i-1]%2==0&&v[i+1]%2==0)     
       {
       temp=(v[i-1]+v[i+1])/2;
       temp2=abs(temp-v[n-i+1]);
     if(temp2>mx[i])
         mx[i]=temp2;
        }
      else 
          temp=v[i];
    up[i]=temp;
    }
     for (int i=n/2+1;i<n;i++)
    {    
    if(v[i-1]%2==0&&v[i+1]%2==0)
     {
        temp=(v[i-1]+v[i+1])/2;
        temp2=abs(temp-v[n-i+1]);
    if(temp2>mx[i])
        mx[i]=temp2;
     else 
     {
         
         
     }
    }
       
        
        
        
    }
   /* int j=n-i+1;
   if(v[j-1]%2==0&&v[j+1]%2==0)
       {
       temp3=(v[j-1]+v[j+1])/2;
       temp4=abs(temp3-v[i]);
    if(temp4>mx)
        mx=temp4;
    }
        else
            temp3=v[j];
   temp5=abs(temp-temp3);
    if(temp5>mx)
        mx=temp5;
        sum=sum+mx;
    }
    */
    for (int i=1;i<=n/2;i++)
        cout<<mx[i]<<" ";
}   
    return 0;
}

