#include<bits/stdc++.h>
using namespace std;
typedef long long int  ll;
int  main()
{
    ll n,q,k;
    scanf("%lld",&n);
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    sort(a,a+n);
    
   ll b[n];
   b[0]=a[0];
   for(ll i=1;i<n;i++)
   {
        b[i]=b[i-1]+a[i];
   }
    
    scanf("%lld",&q);
    ll m;
    while(q--)
    {
        scanf("%lld",&k);
        m=n/(k+1);
        if(n%(k+1)!=0)
            m++;
        printf("%lld\n",b[m-1]);  
    }
    return 0;
}
