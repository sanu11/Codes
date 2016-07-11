#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[4][4];
	while(n--)
	{
		for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			cin>>a[i][j];
		for(int i=0;i<4;i++)
			cout<<a[0][i]<<" ";
		for(int i=1;i<4;i++)
			cout<<a[i][3]<<" ";
		for(int i=2;i>=0;i--)
			cout<<a[3][i]<<" ";
		cout<<a[2][0]<<" "<<a[1][0]<<" "<<a[1][1]<<" " << a[1][2]<<" " <<a[2][2]<<" "<<a[2][1];




	}



	
	return 0;
}