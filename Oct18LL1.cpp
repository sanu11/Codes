#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	int p1,p2,k;
	cin>>t;
	int score;
	while(t--){
		cin>>p1>>p2>>k;
		score = p1+p2;
			if((score/k)%2==1)	
					cout<<"COOK"<<endl;
			else
				cout<<"CHEF"<<endl;
		
}


	return 0;
}