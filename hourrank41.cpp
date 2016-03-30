#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
  long long x,y,c,k;
   cin>>x;
    c=x;
    k=1;
    for(int i = 1;i < n;i++)
    {
       cin >> y;
   if(y<x+k)
       {
       c++;
       k++;
       }
   else
    {
      c=y;
       k=1;
   }
    x=y;
    }
    cout<<c<<endl;
    return 0;
}

