#include<bits/stdc++.h>
using namespace std;
long long getSum(long long n){
	long long sum;	
	while(n!=0){
		sum+=n%10;
		n=n/10;
	}
  return sum;
}
int main(){
	long long temp,temp2;
	long long n=199999999999;
	long long  x=9999999999;9
	for(long long i=x;i<=n;i++){
		temp=getSum(i);
		temp2=getSum(2*i);
		if(temp==100&&temp2==110){
			cout<<i<<endl;
			break;
		}
		// cout<<i<<endl;

	}




}22