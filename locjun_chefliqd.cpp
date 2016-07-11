#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,k,m,n;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k;
		int c,v[n],p[n];
		cin>>c;
		int mx=-99;		
		int j;
		
		for(int i=0;i<n;i++)
			cin>>p[i];
		for(int i=0;i<n;i++)
			cin>>v[i];

			int flag=0;
			for(int l=0;l<n;l++)
			{
				mx=-99;
				flag=0;
				for(int i=0;i<n;i++)
				{

					if(v[i]<=c&&v[i]>mx)
					{
						mx=v[i];
						j=i;
						flag=1;
					}
				}
				if(flag==1)
				{	
					if(p[j]<=m)
					{
						cout<<v[j]<<endl;
						break;
					}
					else
						v[j]=c+1;
			 	}
			 	else
			 	{
			 		cout<<"0"<<endl;
			 		break;
			 	}
			}
			
		}

return 0;

}