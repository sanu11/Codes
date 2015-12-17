#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int n,m;
    scanf("%d%d",&n,&m);
    int q[m],s[n];
    string op[n];
    for(int i=0;i<n;i++)
        scanf("%d",&s[i]);
    for(int i=0;i<m;i++)
        scanf("%d",&q[i]);
    for(int j=0;j<n;j++)
 cin>>op[j];
 
 int mn,mx;
mn=100000001;
    mx=-1;
    int sum=0;
    int sum2=0;
for(int i=0;i<n;i++)
{
mn=1000000001;
mx=-1;
for(int j=0;j<m;j++)
{
if(op[i][j]=='Y')   
{
   if(s[i]*q[j]<mn)
  {
  //	cout<<s[i]<<" "<<q[j]<<endl;
       mn=s[i]*q[j];
   }
    if(s[i]*q[j]>mx)
    mx=s[i]*q[j];
       }
}
    sum+=mn;
    sum2+=mx;
    
}
    cout<<sum<<" "<<sum2;
    
    return 0;
}

