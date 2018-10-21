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
		int c=0;
		int x;
		int flag=0;
		for(int i=1;i<n;i++){
			if(a[i]<a[i-1]){
				if(flag==0){
					x = a[i-1];
					flag=1;
				}
				else{
						flag=2;
						break;
					}
				}

			}
			if(flag==0){
				cout<<"YES"<<endl;
			}
			else if(flag==2)
				cout<<"NO"<<endl;
			else if(flag==1){
				if(a[0]>=a[n-1])
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
			}

			}
	return 0;
}