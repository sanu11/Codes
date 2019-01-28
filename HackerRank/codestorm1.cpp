#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,ob=0,rt=0,ac=0;
cin>>n;
vector<int>a(n);
vector<int>b(n);
vector<int>c(n);
for(int i=0;i<n;i++)
cin>>a[i];
int count=0;
for(int j=1;j<n-1;j++)
{
b.resize(0);
c.resize(0);
for(int i=0;i<j;i++)
{
b.push_back(a[j]+a[i]);
c.push_back(a[j]*a[j]+a[i]*a[i]);
}
int p=0;
for(int k=j+1;k<n;k++)
{
p=b.size()-1;
//cout<<b.size();
while(p>=0 && b[p]>a[k])
{
if(sqrt(c[p])<a[k])
ob++;
else if(sqrt(c[p])>a[k])
ac++;
else
rt++;

p--;
}
}
}
cout<<ac<<" "<<rt<<" "<<ob;
return 0;
}





