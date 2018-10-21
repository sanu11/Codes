#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,m,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		vector<string>str;
		char x[m];
		int a[n+1][m+1]={0};
		for(int i=0;i<n;i++){
			
		scanf("%s",x);
			str.push_back(x);
		}
		
		
		vector< pair <int,int> > ones;
		
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				a[i][j] = str[i-1][j-1]-'0';
				if(a[i][j]==1){
					ones.push_back(make_pair(i,j));
		
				}
			}
		}

		

		vector< pair <int,int> >:: iterator it;
		vector< pair <int,int> >::iterator it2;
		it = ones.begin();

		it =  ones.begin();
		it2 = ones.begin();
		int distance;
		vector<int>v(n+m-1,0);
		int y,z;
		while(it!=ones.end()){
			it2 = ones.begin();
			while(it2!=ones.end()){
				if(it->first==it2->first)
					y = abs(it->second-it2->second);
				else if(it->second==it2->second)
					y = abs(it->first-it2->first);
				else
					y = abs(it->first-it2->first)+ abs(it->second-it2->second);
				v[y]++;
				it2++;
			}
			it++;
		}
		int sz = v.size();
		for(int i=1;i<sz;i++)
			printf("%d ",v[i]/2);
		printf("\n");
	}
}