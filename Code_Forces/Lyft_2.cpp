	#include<bits/stdc++.h>
	using namespace std;
	int main(){
		int m,n;
		cin>>n>>m;
		int a[m+n];
		bool t[m+n];
		int dis[m+n];
		int ans[m+n]={0};
		
		
			for (int i=0;i<n+m;i++)
				cin>>a[i];
			
			for(int i=0;i<m+n;i++)
				cin>>t[i];

			int c=0;
			int i=0;
			int flag=0;
			int prevDr=0;
			while(t[i]!=1&&i<m+n){
				i++;
				c++;
				flag=1;
			}
		
			prevDr=i;
			ans[prevDr]=c;
			c=0;
			i++;
			// cout<<prevDr<<ans[prevDr]<<endl;
			int curDis,temp;
			for(;i<n+m;i++){
				if(t[i]==0){
					c++;
					dis[i]=abs(a[prevDr]-a[i]);
					ans[prevDr]++;	
					// cout<<dis[i]<<" "<<i<<" "<<c<<endl;
				}
				else if(t[i]==1&&c!=0){
					// cout<<prevDr<<" "<<i<<" "<<endl;
					for(int j=prevDr+1;j<i;j++){
						curDis = abs(a[i]-a[j]);
						// cout<<curDis<<" "<<dis[j]<<endl;
						if(curDis<dis[j]){
							dis[j]=curDis;
							// temp = i-j; 
							// ans[i]+=temp;

							// ans[prevDr]-=temp;
							if(ans[prevDr]>=1)
							ans[prevDr]--;
							ans[i]++;

					}
				}
				c=0;
			}
				if(t[i]==1){
					prevDr=i;
				}
			}

			for(int i=0;i<n+m;i++){
				if(t[i]==1)
					cout<<ans[i]<<" ";
			}
			cout<<endl;



		return 0;
	}
