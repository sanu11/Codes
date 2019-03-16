#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	int mask=0;
	string *a;
	int freq[32]={0};
	while(t--){
		mask=0;
		scanf("%d",&n);
		memset(freq,0,sizeof(freq));

		a = new string[n];
		
		for(int i=0;i<n;i++){
			cin>>a[i];
			unordered_set<int> elements; 
			int l = a[i].size();
			for (int j = 0; j <l ; j++) {
				
					if(a[i][j]=='a')
						elements.insert(0);
					else if(a[i][j]=='e')
						elements.insert(1);
					else if(a[i][j]=='i')
						elements.insert(2);
					else if(a[i][j]=='o')
						elements.insert(3);
					else if(a[i][j]=='u')
						elements.insert(4);


			}
			// cout<<elements<<endl;
			mask=0;
			for (auto it = elements.begin(); it != elements.end(); it++) { 
				int digit = (*it); 
				mask += (1 << digit);
				// cout<<digit<<" "<<mask<<endl; 
			} 
			// cout<<mask<<" "<<a[i]<<endl;
			freq[mask]++;
			// cout<<a[i]<<" "<<freq[mask]<<endl;


		}

// for(int i=0;i<=32;i++){

// }
int mainMask = ((1 << 5) - 1); 
// cout<<mainMask<<endl;
int ans=0;
for(int i=1;i<=31;i++){

	for(int j=1;j<=31;j++){

		if((i|j) == mainMask){
			
			if(i==j){
				ans +=freq[i]*(freq[i]-1);
			}
			else  {
				ans +=freq[i]*freq[j];
			}
		}

	}

}

printf("%d",ans/2);


}


return 0;
}