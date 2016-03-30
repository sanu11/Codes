#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define max 1000000007
int main()
{
    long long sum=0;
    int n;
    cin>>n;
    int v=2;
    sum=sum+((n)*(n+1)/2)%max;
    if(n>=4)
    {
sum+=1;
if(n>=5)
        {
        for(int i=5;i<=n;i++)
        {
            sum=(sum%max+v%max)%max;
            v=(v+2)%max;
        if(i%4==0)
        {
            sum+=1;
            sum=sum%max;
        }
        }
      }
}
    cout<<sum%max<<endl;
    return 0;
}
