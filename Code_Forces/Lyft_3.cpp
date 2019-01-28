#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,x,x1,x2,y;
	cin>>n>>m;
	 // vector< pair<int, pair<int,int> >hor;
	 bool row[1000000000]={0};

	for(int i=0;i<n;i++){
		ver.push_back(x);
	}
	for(int i=0;i<m;i++){
		cin>>x1>>x2>>y;
		row[x1]=-1;
		row[x2+1]=1;
	}
	for(int i=0;i<=1000000000;i++){
		row[i]=row[i-1]+row[i];
	}

	int size1=hor.size();
	int size2=ver.size();
	if(size2!=0){
		int ver1 = ver[0];
		for(int i=0;i<size1;i++){
			if(hor[i]->second->first<=ver1&&ver1<=hor[i]->second->second){

			}

		}

	}


}