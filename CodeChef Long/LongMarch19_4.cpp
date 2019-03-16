#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,r,p;
	int *a;
	scanf("%d",&t);
	int flag=0;
	long long ans=0;
	while(t--){
		flag=0;
		
		scanf("%d",&n);
		scanf("%d",&r);
		a = new int[n];
		for(int i=0;i<n;i++)
			cin>>a[i];

		ans=0;
		for(int j=0;j<n;j++){
			ans=0;
			p=1;
			for(int k=j;k<n;k++){
				
				if(a[k]==p)
					ans+=1;
				else if(a[k]>p)
					ans+=a[k]/p;
				if(ans>r)
					break;
				p++;

			}
			// cout<<ans<<endl;
			if(ans<=r){
				cout<<j+1<<endl;
				flag=1;
				break;
			}

			if(flag)
				break;
		}

		if(!flag)
			cout<<n+1<<endl;
	}




}