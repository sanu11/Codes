	#include<bits/stdc++.h>
	using namespace std;
	int main(){


		int t;
		cin>>t;
		long long n,mx,x,mn,posCount=0,negCount=0;
		// long x,mn,mx;
		while(t--){
			cin>>n;
			// a = new int[n];
			posCount=0;
			negCount=0;

			for(int i=0;i<n;i++){
				cin>>x;
				if(x<=0)
					negCount++;
				if(x>0)
					posCount++;

			}

			if(negCount<posCount){
				mn = negCount;
				mx = posCount;
			}
			else{
				mn = posCount;
				mx = negCount;
			}
			if(mn == 0)
				mn = mx;
			if(mx ==0 )
				mx =mn;
			cout<<mx<<" "<<mn<<endl;


		}

		return 0;

	}