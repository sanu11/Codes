#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
int n,a=0,b=0,c=0;
   cin>>n;
    char x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
    if(x=='a')
        a++;
        else if(x=='b')
            b++;
            else
            c++;
    }
if(a>=b&&a>=c)
    cout<<b+c<<endl;
    else if(b>=a&&b>=c)
        cout<<a+c<<endl;
     else
        cout<<a+b<<endl;
    
    return 0;
}
