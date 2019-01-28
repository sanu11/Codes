#include<bits/stdc++.h>
using namespace std;
// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &stores, vector<int> &houses) {
    // write your code in C++14 (g++ 6.2.0)
    int mn;
    vector<int>result;
    int temp,index;
    int m = stores.size();
    int n = houses.size();
    for(int i=0;i<n;i++){
        mn = 999999999;
        for(int j=0;j<m;j++){
            temp = abs(houses[i]-stores[j]);
            if(temp < mn){
                mn = temp;
                index = j;
            }
            else if(temp == mn && stores[j]<=stores[index]){
                index=j;
                mn=temp;
            }
            
        }
        result.push_back(stores[index]);
    }
    
    return result;
}


//  vector<int> solution(vector<int> &stores, vector<int> &houses) {
// //     // write your code in C++14 (g++ 6.2.0)
//     sort(stores.begin(),stores.end());
//     int j=0,total=0,mid=0,current=0,next=0;
//     int m = stores.size();
//     int n = houses.size();
//     int arr[1000000];
//      for(int i=0;i<m;i++){
//          current = stores[i];
//          next = stores[i+1];
//          total = current+next;
//          mid = (current+next)/2;
//          if(total%2!=0)
//             mid+=1;
//          j=0;
//          while(j<mid){
             
//          }
        
//      }
     
     
     
//  }

int main(){



	return 0;
}