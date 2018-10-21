#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];

		sort(a,a+n,greater<int>());

		long long c=0;
		for(int i=0;i<n;i++)
			if(a[i]>=a[k-1])
				c++;
		cout<<c<<endl;
	}



	return 0;
}