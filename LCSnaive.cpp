#include<bits/stdc++.h>
using namespace std;
string a,b;
int **ar;
int lcs(int m,int n)
{	
if(m==0||n==0)
return 0;
if(ar[n][m]==-1)
{
if(a[m-1]==b[n-1]&&ar[n][m]==-1)	
ar[n][m]= 1+lcs(m-1,n-1);
else
ar[n][m]=max(lcs(m-1,n),lcs(m,n-1));
}
return ar[n][m];
}
int main()
{
	cin>>a>>b;
     int m=a.length();
     int n=b.length();
	ar=new int*[m+1];
	for(int i=0;i<=m;i++)
		ar[i]= new int[n+1];
	for(int i=0;i<=n;i++)
		for(int j=0;j<=m;j++)
			ar[i][j]=-1;
	int y=lcs(m,n);
cout<<y<<"\n";
return 0;
}