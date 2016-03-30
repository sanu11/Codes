#include<bits/stdc++.h>
using namespace std;
int arr[1000][1000];  
int lps(char *s)
{
  memset(arr,0,sizeof(arr));
   int n = strlen(s);
   int i, j, cl;
   for (i = 0; i < n; i++)
      arr[i][i] = 1;
    for (cl=2; cl<=n; cl++)
    {
        for (i=0; i<n-cl+1; i++)
        {
            j = i+cl-1;
            if (s[i] == s[j] && cl == 2)
               arr[i][j] = 2;
            else if (s[i] == s[j])
               arr[i][j] = arr[i+1][j-1] + 2;
            else
               arr[i][j] = max(arr[i][j-1], arr[i+1][j]);
        }
    }
    return arr[0][n-1];
}
 int main()
{
  int t;
  scanf("%d",&t);
  char *a=new char[1001];
  char *b=new char[1001];
  while(t--)
  {
    scanf("%s",a);
    scanf("%s",b);
    int l1=lps(a);
  int l2=lps(b);
if(l1%2!=0&&l2%2!=0)
 printf("%d\n",l1+l2-1);
else
 printf("%d\n",l1+l2);
 getchar();
} 
    return 0;
}