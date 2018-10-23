#include<bits/stdc++.h>
using namespace std;

std::vector<int> a = {10,8,15,20,19,9};
    int next(int n) {
        int i=0,j;
        int size = a.size();
        while(n){

          if(i>=size){
            return -1;
          }
          else if(a[i]==0){
            i+=2;
        }

        else if(a[i]>n){
          a[i]=a[i]-n;
          n=0;
          return a[i+1];
        }
        else if(a[i]<n){
          n=n-a[i];
          a[i]=0;
          i=i+2;

        }
        else{
          a[i]=0;
          return a[i+1];
        }



        }

    }

int main(){
  int n,c;
  cin>>c;
  while(c){
    cin>>n;
int param_1 = next(n);
cout<<param_1;
c--;
}
return 0;
}
