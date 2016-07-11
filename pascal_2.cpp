#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
		int y=n-1;

	for(int i=1;i<=n;i++)
	{
		for(int k=0;k<y;k++)
			cout<<" ";
		y--;

		int c=1;
		for(int j=1;j<=i;j++)
		{
			
			cout<<c<<" ";
			c=c*(i-j)/j;
		}
		cout<<endl;
	}
// for (int line = 1; line <= n; line++)
//   {
//     int C = 1;  // used to represent C(line, i)
//     for (int i = 1; i <= line; i++)  
//     {
//       printf("%d ", C);  // The first value in a line is always 1
//       C = C * (line - i) / i;  
//     }
//     printf("\n");
//   }
	return 0;
}