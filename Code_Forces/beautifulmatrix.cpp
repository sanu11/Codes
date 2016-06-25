#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,I,J,c=0;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
		{
			cin>>x;
			if(x==1)
			{
				I=i;
				J=j;
			}
		}
		cout<<abs(I-2)+abs(J-2)<<endl;
	return 0;
}