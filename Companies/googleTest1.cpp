#include<bits/stdc++.h>
using namespace std;

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int D, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int>result;
    int n= A.size();
    int j=0,temp=0;
    for(int i=0;i<n;i++){
        j=0;
        temp=i;
        while(j<D){
            if(temp==-1){
                break;
            }
            temp = A[temp];
            j++;
        }
        
        result.push_back(temp);
        
        
    }
    return result;
}
int main(){
	int n,d;
	cin>>n;
	int a[n][3];
	for(int i=0;i<n;i++)
		for(int j=0;j<3;j++)
			cin>>a[i][j];


	for(int i=0;i<n;i++){



		}


	return 0;
}