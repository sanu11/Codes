#include<bits/stdc++.h>
using namespace std;

  int main()
{
int a[]={1,2,3};
int n=sizeof(a)/sizeof(a[0]);
for(int i=1; i<1<<n; i++)
{
    int temp=i;
    int j=0;
    while(temp)
    {
        if (temp&1) // if jth bit is set print a[j]
        {
            printf("%d ",a[j]);
        }
        temp >>= 1;
        j++;
    }
    printf("\n");
}
return 0;
}