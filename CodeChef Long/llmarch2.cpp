#include <bits/stdc++.h>
using namespace std;
#define clear_  memset(arr,0,sizeof(arr)),memset(brr,0,sizeof(brr));
int main()
{
    ios_base::sync_with_stdio(false);
    long long t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long arr[n],brr[n],i,max_i=0,min_i=0,total=0;
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<n;i++)
        {
            cin>>brr[i];
            brr[i]>brr[max_i] ? max_i=i:1;
            brr[i]<brr[min_i] ? min_i=i:1;
            total+=(arr[i]*brr[i]);
        }
        if((brr[min_i]*(-k))>(brr[max_i]*k))
        {
            cout<<total+brr[min_i]*(-k)<<endl;
        }
        else
        {
            cout<<total+brr[max_i]*k<<endl;
        }
    }
    return 0;
}