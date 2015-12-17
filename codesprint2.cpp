#include<bits/stdc++.h>
using namespace std;
#define mx 1000000007
int m,n;
long long sum=0;
int a[2500][2500];
void recur(int i,int j,int temp)
{
//cout<<i<<" "<<j<<endl;
int te=(temp%mx*a[i][j]%mx)%mx;
//left
if(j<m)
{
int z=j+1;
recur(i,z,te);
}
//cout<<i<<" "<<j<<"after left"<<endl;
//down
if(i<n)
{
int y=i+1;
recur(y,j,te);
}
//cout<<i<<" "<<j<<"after down"<<endl;
//diag
if(i<n&&j<m)
{
int y=i+1;
int z=j+1;
recur(y,z,te);
}
//cout<<i<<" "<<j<<"after diag"<<endl;
if(i==n&&j==m)
{
sum=(sum%mx+te%mx)%mx;
//cout<<"equal"<< te<<endl;
}
}

int main()
{
sum=0;
scanf("%d%d",&n,&m);
for(int i=1;i<=n;i++)
for(int j=1;j<=m;j++)
scanf("%d",&a[i][j]);
recur(1,1,1);
cout<<sum%mx<<endl;
}

