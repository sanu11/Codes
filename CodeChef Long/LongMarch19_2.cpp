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
		mn = 10;
		int start=0;
		while(start!=l){
		mn = 10;

		for(int i=start;i<l;i++){

			// cout<< int(num[i])<<endl;
			temp = int(num[i])- 48;
			// cout<<temp;
			if(temp < mn){
				mn = temp;
				index = i;
				// cout<<res;
			}

		}	
		if(mn<d){


		int flag=index;
		res+=num[index];

		for(int i=index+1;i<l;i++){
			temp = int(num[i])- 48;
			if(temp == mn){
				flag = i;
				res+=num[i];
			}

		}
		start = flag+1;

}
else
break;

}


		while(res.size()<l){
			res+=std::to_string(d);

		}

cout<<stoull(res)<<endl;
	
	}
return 0;


}