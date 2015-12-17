#include<bits/stdc++.h>
using namespace std;


int main() 
{
    int n;
    scanf("%d",&n);
    char a[n+1][n+1]={'Z'};
    int x,y;
    char c;
    for(int i=0;i<n-1;i++)
     {
     cin>>x>>y>>c;
     cout<<x<<y<<c;
        a[x][y]=c;
     a[y][x]=c;   
    }
    for(int i=1;i<=n;i++)
 {
        for(int j=1;j<=n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
}
    for(int i=1;i<=n;i++)
     {
        int vi[n+1]={0};
        vi[i]=1;
        int t=i;
 while(true)
     {
         char temp,mx='1';
            int k;
     for(int j=1;j<=n;j++)
     {
         if(a[t][j]!='Z')
         temp=a[t][j];
         if(temp>=mx&&vi[j]!=1)
         {
         mx=temp;
         k=j;    
         }
     }
     int flag=0;
     if(vi[k]==1)
      {
         for(int e=1;e<=n;e++)
          {
         if(a[k][e]!='Z')
         {
           cout<<k<<" ";
         flag=1;
         }
         }
     }
     if(flag==1)
         break;
           vi[k]=1;
            t=k;
    }
         //for(int y=1;y<=n;y++)
        //cout<<vi[y]<<" ";
     //cout<<"\n";
    
    }
    

    
    
    return 0;
}

