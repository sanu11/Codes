#include<bits/stdc++.h>
using namespace std;
#define Ford(n) for(int i=15;i>n;i--)
#define Fori(n) for(int j=1;j<n;j++)
vector<vector<int> > a(16,vector<int>(16));
int make(int b,int c,int d,int e,int f,int g,int h,int i)
{
if(a[b][c]==0&&a[d][e]==0&&a[f][g]==0&&a[h][i]==0)
{
a[b][c]=1;
a[d][e]=1;
a[f][g]=1;
a[h][i]=1;
return 1;
}
return 0;
}
int chckemp()
{
int k=0;
for(int i=1;i<=15;i++)
{
	int j;
	for( j=1;j<=15;j++)
	{
		if(a[i][j]==0)
			break;
	}
	if(j==16)
	{
		a.erase(a.begin()+i);
		a.insert(a.begin()+1,vector<int>(15,0));
	}
}
return 0;
}
void fig1a()
{
Ford(0)
		{
			int p=-1;
				Fori(13)
				if(make(i,j,i,j+1,i,j+2,i,j+3)==1)
				{
				p=j;
				break;
				}     
				if(p!=-1)
				{
				cout<<"a "<<i<<" "<<p<<"\n";	
				break;
				}
		}   	

}
void fig1b()
{
	int j=15;
		while(true)
		{
			int p=0;
			int i;
			for( i=1;i<=15;i++)
				if(make(j,i,j-1,i,j-2,i,j-3,i)==1)
				{
				p=1;
				break;
				}
			if(p==1)
			{
				
				cout<<"b "<<j<<" "<<i<<endl;
				break;
			}
			j--;
			if(j<3)
			break;
		}
}   
void fig2a()
{
	Ford(1)
			{
				int p=-1;
				Fori(14)
					if(make(i,j,i-1,j,i,j+1,i,j+2)==1)
					{
						p=j;
						break;
					}
					if(p!=-1)
					{
						cout<<"a "<<i<<" "<<p<<endl;
						break;
					}
				}
}
void fig2b()
{
	Ford(2)
			{
				int p=-1;
				Fori(15)
					if(make(i,j,i,j+1,i-1,j+1,i-2,j+1)==1)	
					{
						p=j;
						break;
					}
					if(p!=-1)
					{
						cout<<"b "<<i<<" "<<p<<endl;
						break;
					}
			}
}
void fig2c()
{
	Ford(2)
			{
				int p=-1;
				Fori(15)
					if(make(i,j,i-1,j,i-2,j,i-2,j+1)==1)
				{
					p=j;
					break;
				}
				if(p!=-1)
				{
					cout<<"c "<<i<<" "<<p<<endl;
					break;
				}
			}

}
void fig2d()
{
	Ford(1)
			{
				int p=-1;
				Fori(14)
					if(make(i-1,j,i-1,j+1,i-1,j+2,i,j+2)==1)
					{
						p=j;
						break;
					}
					if(p!=-1)
					{
						cout<<"d "<<i<<" "<<p<<endl;
						break;
					}
			}
	
}

void fig3a()
{
			Ford(1)
			{
				int p=-1;
				Fori(14)
					if(make(i,j,i,j+1,i,j+2,i-1,j+2)==1)
					{
						p=j;
						break;
					}
				if(p!=-1)
				{
					cout<<"a "<<i<<" "<<p<<endl;
					break;
				}
			}
	
}
void fig3b()
{

			Ford(2)
			{
				int p=-1;
				Fori(15)
					if(make(i,j,i-1,j,i-2,j,i,j+1)==1)
					{
						p=j;
					break;
					}
				if(p!=-1)
				{
					cout<<"b "<<i<<" "<<p<<endl;
					break;
				}
			}


}
void fig3c()
{

			Ford(1)
			{
				int p=-1;
				Fori(14)
					if(make(i,j,i-1,j,i-1,j+1,i-1,j+2)==1)
					{
						p=j;
					break;
					}
				if(p!=-1)
				{
					cout<<"c "<<i<<" "<<p<<endl;
					break;
				}
			}
	
}
void fig3d()
{
Ford(2)
	{
		int p=-1;
			Fori(15)
				if(make(i,j+1,i-1,j+1,i-2,j+1,i-2,j)==1)
					{
						p=j;
					break;
					}
				if(p!=-1)
				{
					cout<<"a "<<i<<" "<<p<<endl;
					break;
				}
			}
}
void fig4()
{
	int p=-1;
		Ford(1)
		{
			Fori(15)
				if(make(i,j,i-1,j,i,j+1,i-1,j+1)==1)
				{
					p=j;
					break;
				}
				if(p!=-1)
				{
					cout<<"a "<<i<<" "<<p<<endl;
					break;
				}
		}
}
void fig5a()
{
Ford(1)
			{
				int p=-1;
				Fori(14)
					if(make(i,j,i,j+1,i-1,j+1,i-1,j+2)==1)
					{
						p=j;
					break;
					}
				if(p!=-1)
				{
					cout<<"a "<<i<<" "<<p<<endl;
					break;
				}
			}	
}
void fig5b()
{
Ford(2)
			{
				int p=-1;
				Fori(15)
					if(make(i,j+1,i-1,j+1,i-1,j,i-2,j)==1)
					{
						p=j;
					break;
					}
				if(p!=-1)
				{
					cout<<"b "<<i<<" "<<p<<endl;
					break;
				}
			}				
}
void fig6a()
{
Ford(1)
			{
				int p=-1;
				Fori(14)
					if(make(i,j,i,j+1,i,j+2,i-1,j+1)==1)
					{
						p=j;
					break;
					}
				if(p!=-1)
				{
					cout<<"a "<<i<<" "<<p<<endl;
					break;
				}
			}
}
void fig6b()
{
Ford(2)
			{
				int p=-1;
				Fori(15)
					if(make(i,j,i-1,j,i-2,j,i-1,j+1)==1)
					{
						p=j;
					break;
					}
				if(p!=-1)
				{
					cout<<"b "<<i<<" "<<p<<endl;
					break;
				}
			}			
}
void fig6c()
{
	Ford(1)
			{
				int p=-1;
				Fori(14)
					if(make(i-1,j,i-1,j+1,i-1,j+2,i,j+1)==1)
					{
						p=j;
					break;
					}
				if(p!=-1)
				{
					cout<<"c "<<i<<" "<<p<<endl;
					break;
				}
			}				
		
}
void fig6d()
{
Ford(2)
			{
				int p=-1;
				Fori(15)
					if(make(i-1,j,i,j+1,i-1,j+1,i-2,j+1)==1)
					{
						p=j;
					break;
					}
				if(p!=-1)
				{
					cout<<"d "<<i<<" "<<p<<endl;
					break;
				}
			}				
}
void fig7a()
{
			Ford(1)
			{
				int p=-1;
				Fori(14)
					if(make(i,j+1,i,j+2,i-1,j,i-1,j+1)==1)
					{
						p=j;
					break;
					}
				if(p!=-1)
				{
					cout<<"a "<<i<<" "<<p<<endl;
					break;
				}
			}				
		
}
void fig7b()
{
Ford(2)
			{
				int p=-1;
				Fori(15)
					if(make(i,j,i-1,j,i-1,j+1,i-2,j+1)==1)
					{
						p=j;
					break;
					}
				if(p!=-1)
				{
					cout<<"b "<<i<<" "<<p<<endl;;
					break;
				}
			}				
}




int main()
{
int n,type,fig;
string c;
while(true)
{
 string string1,string2;
 cin>>string1;
 if(string1=="Game")
 break;
 else
 {
 	cin>>string2;
 	type=atoi(string1.c_str());
 	fig=atoi(string2.c_str());
 	if(type==2)
 		cin>>c;
 }
if(type==2)
{
	if(fig==1)
	{
	if(c=="a")
	fig1a();												            //c=="a";
	else if(c=="b")
	fig1b();
	}
	else if(fig==4)
	fig4();
	else if(fig==2)
	{
		if(c=="a")
		fig2a();
		else if(c=="b")
		fig2b();
		else if(c=="c")
		fig2c();
		else if(c=="d")
		fig2d();
	}

	else if(fig==3)
	{
	if(c=="a")
	fig3a();
	else if(c=="b")
	fig3b();
	else if(c=="c")
	fig3c();
	else if(c=="d")	
	fig3d();	
	}
	else if(fig==5)
		{
			if(c=="a")
			fig5a();
			else if(c=="b")
			fig5b();
		}
	else if(fig==6)
		{
			if(c=="a")
			fig6a();
			else if(c=="b")
			fig6b();
			else if(c=="c")
			fig6c();
			else if(c=="d")
			fig6d();
		}
	else if(fig==7)
	{
			if(c=="a")
			fig7a();
			else if(c=="b")
			fig7b();
	}
}
else if(type==1)
{
if(fig==1)
fig1a();
else if(fig==2)
fig2a();
else if(fig==3)
fig3a();
else if(fig==4)
fig4();
else if(fig==5)
fig5a();
else if(fig==6)
fig6a();
else if(fig==7)
fig7a();
}
chckemp();
//cout<<"\n";
/*for(int i=1;i<=15;i++)
{
	for(int j=1;j<=15;j++)
		cout<<a[i][j]<<" ";
	cout<<"\n";
}*/
}
return 0;
}
