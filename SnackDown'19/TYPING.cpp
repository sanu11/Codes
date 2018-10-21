#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	string x;
	while(t--){
		map<string,int>words;
		map<string,int>:: iterator it;

		int temp,count,size,flag=0;
		float time,totaltime,time2;
		time2=0;
		time=0;
		totaltime=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>x;	
			it = words.find(x);
			if(it!=words.end()){
				(it->second)++;
			}
			else
			words.insert(make_pair(x,1));
		}
		totaltime=0;	
		it = words.begin();
		string word;
		while(it!=words.end()){	
			word  = it->first;
			if(word[0]=='d'||word[0]=='f')
				flag=0;
			else
				flag=1;
			time=0.2;
			size = (it->first).size();
			for(int j=1;j<size;j++)
			{
				if(word[j]=='d'||word[j]=='f'){
					if(flag==0)
						time+=0.4;
					else
						time+=0.2;
					flag=0;
				}
				else if(word[j]=='j'||word[j]=='k'){
					if(flag==1)
						time+=0.4;
					else
						time+=0.2;
					flag=1;
				}
				
			}
			if(it->second>1){
					int count2 = it->second;
					count2--;
					time2 = (time/2)*count2;
					time = time + time2;

				}
			totaltime+=time;
			
			it++;
		}


		cout<<totaltime*10<<endl;
	}

	return 0;

}

	// it = words.begin();
	// 	while(it!=words.end()){
	// 		cout<<it->first<<" "<<it->second<<endl;
	// 		it++;
	// /
