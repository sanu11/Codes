#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	int bytes=0,nibbles=0,bits=0;
	while(t--){
	
		cin>>n;
		n = n-1;
		bytes = n/8;
		n = n%8;
		nibbles = n/2;
		n=n%2;
		bits = n;
		
		cout<<bits<<" "<<nibbles<<" "<<bytes<<endl;
}


	return 0;
}