#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
int prime[MAX];
void seive()
{
memset(prime,0,sizeof(prime));  
for(int i=2;i*i<=MAX;i++) 
{
if(prime[i]!=1) 
{
for(int j=i*2;j<=MAX;j=j+i)
{
prime[j]=1;
}
}
}
}   
long long sf(int a)
 {
    long long temp=0,temp2=0;
    long long num=0;
    for(int i=2;i<=a;i++)
    {
    if(prime[i]==0)
    {
        int j=1;
        while(true)
        {
            temp=a/(int)pow(i,j);
            temp2+=temp;
            if(temp==0)
            break;
            j++;
        }
    }
    }
    return temp2;
 }
int main() 
{
    int n;
    scanf("%d",&n);
    seive();
    long long arr[n];
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);  
    arr[i]=sf(a[i]);
    }
    long long num=0,num2=0;
//     for(int i=0;i<n;i++)
//     {
//         num=0;
//         for(int j=i;j<n;j++)
//         {
// num+=arr[j];
//    cout<<num<<endl;
// if(num%2==0)
//     num2+=num;
//    }
// }
for(int i=1; i<1<<n; i++)
{
    int temp=i;
    int j=0;
  num=0;
    while(temp)
    {
        if (temp&1) // if jth bit is set print a[j]
        {
    num+=arr[j];
        }
        temp >>= 1;
        j++;
    }
         if(num%2==0)
            num2+=num;
   }
printf("%ld\n",num2);
    return 0;
}