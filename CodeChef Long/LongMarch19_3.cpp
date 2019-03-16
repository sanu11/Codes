#include<bits/stdc++.h>
using namespace std;
int main(){

	int t,n;
	int mainMask = ((1 << 5) - 1); 
	scanf("%d",&t);
	int mask=0;
	string *a;

	while(t--){
	
		scanf("%d",&n);
		int freq[32]={0};
		a = new string[n];
		
		for(int i=0;i<n;i++)
			cin>>a[i];
		
		for(int i=0;i<n;i++){

			// memset(freq,0,sizeof(freq));
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
	
				mask += (1 << (*it));
				// cout<<digit<<" "<<mask<<endl; 
			} 
			// cout<<mask<<" "<<a[i]<<endl;
			freq[mask]++;
			// cout<<a[i]<<" "<<freq[mask]<<endl;


		}

// for(int i=0;i<=32;i++){

// }

// cout<<mainMask<<endl;
int ans=0;
for(int i=1;i<=31;i++){

	for(int j=1;j<=31;j++){

		if((i|j) == mainMask){
			
			if(i==j){
				ans +=freq[i]*(freq[i]-1);
		
			}
			else {
				ans +=freq[i]*freq[j];
				// cout<<(i|j)<<endl;
				// cout<<i<<" "<<j<<endl;
			}
		}

	}

}
printf("%d",ans/2);


	}


return 0;
}