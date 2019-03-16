#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main(){

	ll t;
	ll n;
	int d,mn,temp,index;
	string res="";
	cin>>t;
	ll l;
	while(t--){

		index =0;
		cin>>n>>d;
		string num = std::to_string(n);
		l= num.size();
		res="";
		// sort(num.begin(),num.end());
		for (int i =0 ;i<l;i++){
			temp = int(num[i]) - 48;
			if(temp<d){
				res+=num[i];
			}


		}



		while(res.size()<l){
			res+=std::to_string(d);

		}

cout<<stoull(res)<<endl;
	
	}
return 0;


}