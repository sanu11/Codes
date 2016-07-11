#include<bits/stdc++.h>
using namespace std;

int **a,*vi,max,n;
void reset()
{
	for(int i=1;i<=n;i++)
		vi[i]=0;
}

int nodes()
{
for(int i=1;i<=n;i++)
	if(vi[i]==0)	
		return 1;
}

int main()
{
	int I,J,root=1,min=-1,addition=0;
	scanf("%d",&n);	
	a=new int* [n+1];
	for(int i=0;i<=n;i++)
		a[i]=new int[n+1];
	int m;
	cin>>m;
	vi=new int[n+1];
	memset(vi,0,sizeof(vi));
	memset(a,0,sizeof(a));
	int x,y,r;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y>>r;
		if(a[x][y]==0)
		{
			a[x][y]=r;
			a[y][x]=r;
		}
		else if(a[x][y]>0&&r<a[x][y])
		{
			a[x][y]=r;
			a[y][x]=r;
		}
	}
	reset();
	scanf("%d",&root);
	vi[root]=1;
		
	while(nodes()==1)
	{

		min=999999;
		for(int i=1;i<=n;i++)
		{	
			if(vi[i]==1)
			{
				for(int j=1;j<=n;j++)
					if(vi[j]==0 && a[i][j]!=0)
					{
						if(a[i][j]<min)
						{
							I=i;
							J=j;	
							min=a[i][j];
						}
					}
			}
		}
		vi[J]=1;
		addition+=min;
	
	}
	
	printf("%d\n",addition);
	return 0;
}