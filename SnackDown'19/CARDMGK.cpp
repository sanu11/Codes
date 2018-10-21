#include<bits/stdc++.h>
using namespace std;
int *a;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		a = new int[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int x,y;
		int i=1;
		
		while(i<n&&a[i-1]<=a[i])
			i++;
		if(i==n){
			cout<<"YES"<<endl;
			continue;	
		}

		if(a[i]<a[i-1]){
			x=a[i-1];
			i++;
		}
		cout<<x<<endl;
		
		while(i<n&&a[i-1]<=a[i])
			i++;
		
		if(x>a[n-1]&&i==n)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
	return 0;
}