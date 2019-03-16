#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	scanf("%d",&t);
	int mask=0;
	
	int mainMask = ((1 << 5) - 1); 
	long long ans=0;
	string *a;

	while(t--){
		
		ans=0;
		scanf("%d",&n);
		int freq[32]={0};
		a= new string[n];

		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		for(int i=0;i<n;i++){

			// memset(freq,0,sizeof(freq));
			std::set<char> ele(a[i].begin(), a[i].end());
			std:set<int>elements;
			// int l = ele.size();
			for (auto it = ele.begin(); it != ele.end(); it++) {
				
					if(*it=='a')
						elements.insert(0);
					else if(*it=='e')
						elements.insert(1);
					else if(*it=='i')
						elements.insert(2);
					else if(*it=='o')
						elements.insert(3);
					else if(*it=='u')
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

ans=0;
for(int i=1;i<=31;i++){

	for(int j=i;j<=31;j++){

		if((i|j) == mainMask){
			
			if(i==j)
				ans +=freq[i]*(freq[i]-1)/2;
			
			else
				ans +=freq[i]*freq[j];
			}
		}

}

printf("%llu\n",ans);


}


return 0;
}