#include<bits/stdc++.h>
using namespace std;
int invcount(vector<int> &a)
{
	int count=0;
	for(int i=0;i<a.size();i++)
	{
		for(int j=i+1;j<a.size();j++)
		{
			if(a[j]<a[i])
				count++;
		}
	}
	return count;
}
void recur(vector<int> &a,int ii,int jj,int y)
{
	if(y==1)
	{
		a.insert(a.begin(),a[ii]);
		for(int i=1;i<=4;i++)
		recur(a,ii+1,jj,i);
}
	if(y==2)
	{
		a.insert(a.size()+1,a[ii]);
		for(int i=1;i<=4;i++)
			recur(a,ii+1,jj,i);
	}
	if(y==3)
		a.insert(a.begin(),a[jj]);
	else
		a.insert(a.size()+1,a[jj]);

}
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n;
scanf("%d",&n);
for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
int ii=0,jj=n-1;
vector<int> b;
vector<int> c;
vector<int> d;
vector<int> e;
while(ii!=jj)
{
	b.insert(b.begin(),a[ii]);
	c.insert(c.size()+1,a[ii]);
	d.insert(d.begin(),d[jj]);
	e.insert(e.size()+1,e[jj]);


}


}
return 0;
}
