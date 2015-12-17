#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
inline long long int input()
{
	long long int n=0,c;

	while ((c= getchar_unlocked())<'0');
    
    /*if(c=='-')
    {
        neg=1;
        c=getchar_unlocked();
     }   */
	while(c>='0' && c<='9')
	{
		n= (n<<3) + (n<<1) + (c-'0');
		c= getchar_unlocked();
	}
    
    //if(neg)
      //  n=-n;
	return n;
}
int main()
{
    ll t,n,m,l,r;
    t=input();
    ll sum;
    while(t--)
    {
        n=input();
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            a[i]=input();
        }
        m=input();
        while(m--)
        {
            map<ll,ll> v;
            l=input();
            r=input();
            ll b[r-l+1];
            copy(a+l-1,a+r,b);
            sort(b,b+r-l+1);
            sum=0;
            ll k=1;
            for(ll i=0;i<r-l+1;i++)
            {
                if(v[b[i]]==0)
                {
                    sum+=((k)*b[i]);
                    k++;
                    v[b[i]]=1;
                }     
            }
        printf("%lld\n",sum);
        }
        
    }
}
