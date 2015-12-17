#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() 
{
int t,n,x,y;
ll count=0,count2=0;
scanf("%d",&t);
while(t--)
    {
        scanf("%d",&n);
     scanf("%d",&x);
        count2=x;
    int k=0;
    count=0;
        for(int i=0;i<n-1;i++)
        {
        
            scanf("%d",&y);
            if(i==n-2&&y>x) 
            {    
            cout<<y<<"*"<<k<<"-"<<count2<<"\n";
            count+=y*(k+1)-count2;    
            }
            else if(y>x)
            {    
            count2+=y;
            k++;
            }
            else
            {
            count2-=x;   
            cout<<x<<"*"<<k<<"-"<<count2<<"\n"; 
            count+=x*k-count2;
            k=0; 
            }
            x=y;
        }
            printf("%lld",count);
            
    }
    
    
    return 0;
}
