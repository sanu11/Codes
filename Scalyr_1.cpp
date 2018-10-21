#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int n;
	std::vector<string> u;
	cin>>n;
	string x;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		u.push_back(x);
	}
	
    int len = u.size();
    map<string,pair<int,int> >mymap;
    int count=0;
    std::map<string,pair<int,int> >::iterator it;
    for(int i=0;i<len;i++){
      it = mymap.find(u[i]);
      if (it != mymap.end()){
         count = (it->second).first;
         count+=1;
         mymap.insert ( std::pair<char,pair<int,int>(u[i],pair<count,0>));
    }
        else{
            mymap.insert ( std::pair<char,int>(u[i],pair<count,0>));
        }

    }
    for(int i=0;i<len;i++){
        if(user.find(u[i])){
            cout<<user->second->first<<" "<<user->second->second<<endl;
        }
        
        
    }                      

return 0;
}