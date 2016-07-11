#include <iostream>
using namespace std;

int main()
{
    long long n;
    long x;
    cin>>n>>x;
    long long arr[n];
    
    for(long long i=0;i<n;i++)
        cin>>arr[i];
    long long i=0;
    long long count=0;
    while(arr[i]<=x&&i<n)
    {
        i++;
        count++;
    }
    long long max=count;
    long long last=i;
    for(long long k=i+1;k<n;k++)
    {
        if(arr[k]>x)
        {
            count=k-last-1;
            last=k;
        }
        else
        {
            count++;
        }
        max<count ? max=count:1;
    }
    cout<<max<<endl;
    return 0;
}