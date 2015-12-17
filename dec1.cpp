#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
    ll n1,n2,m;
    scanf("%lld%lld%lld",&n1,&n2,&m);
    ll count=0;
    ll mn=m*(m+1)/2;
    if(n1>n2)
    	if(n2<=mn)
    		printf("%lld\n",n1-n2);
        else
        	printf("%lld\n", (n2-mn)+(n1-mn));
    else if(n2>n1)
    	if(n1<=mn)
    		printf("%lld\n",n2-n1);
    	else
    		printf("%lld\n", (n2-mn)+(n1-mn));
   else if(n1==n2)
   	    if(n1>mn)
   	    	printf("%lld\n", 2*(n1-mn));
   	    else
   	    	printf("0\n");

}
	return 0;
}
