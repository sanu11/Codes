
#include<bits/stdc++.h>
using namespace std;


int main() 
{
    int n,m;
    cin>>n;
    int arr[n];
    int x,y;
    map<int,int>a;
    map<int,int>::iterator p;
    
    for(int i=0;i<n;i++)
    {    
    cin>>arr[i];

        cin>>x;
    for(int j=0;j<x;j++)
        {
     cin>>y;
    p=a.find(y);
     if(p==a.end())
        a.insert(make_pair(y,1));  
    }
    }
    p=a.begin();
    for(int i=0;i<n;i++)
     {
        p=a.begin();
     while(p!=a.end()) 
         {
          // cout<<arr[i]<<" "<<p->first<<endl; 
        if(arr[i]==p->first)
         p->second--;
     p++;
     }
    }
    p=a.begin();
    int sum=0;
   while(p!=a.end())
 {
    //cout<<p->first<<" "<<p->second<<endl;
        sum+=p->second;
p++;
}
    cout<<sum<<endl;
    return 0;
}
