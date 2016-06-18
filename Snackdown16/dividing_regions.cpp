#include <bits/stdc++.h>
#define ll long long
using namespace std; 
ll modular_pow(ll base, ll exponent, int modulus)
{
    ll result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        exponent = exponent >> 1;
        base = (base * base) % modulus;
        cout<<result<<endl;	
    }
    return result;
}

int main()
{

    int t,n,a,b,c,d,e;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>c>>d>>e;
        int a[n][n];






    }

return 0;
}

