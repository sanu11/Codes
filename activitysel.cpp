#include<bits/stdc++.h>
using namespace std;
bool myComparison(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second<b.second;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,y;
		cin>>n;
		int a[n],b[n];
		vector<pair<int,int> >v;
		for(int i=0;i<n;i++)
			cin>>a[i];

		for(int i=0;i<n;i++)
			cin>>b[i];
		for(int i=0;i<n;i++)	
			v.push_back(make_pair(a[i],b[i]));
	 	

	sort(v.begin(),v.end(),myComparison);
	// for(int i=0;i<n;i++)
	// 	cout<<v[i].first<<" "<<v[i].second<<endl;
	// 	cout<<"hi\n";
		int temp,c=1;
		temp=v[0].second;
		for(int i=1;i<n;i++)
		{
			if(temp<=v[i].first)
			{
				c++;
				temp=v[i].second;
				// cout<<v[i].first<<" "<<v[i].second<<endl;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}