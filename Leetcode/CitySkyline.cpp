#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n][n];
  int max[2*n+2]={0};
  for(int i=0;i<n;i++){
    for ( int j=0 ;j<n; j++) {
      std::cin >> a[i][j];
    }
  }


for(int i=0;i<n;i++){

  for(int j=0;j<n;j++){
    if(a[i][j]>max[i+1]){
      max[i+1]=a[i][j];
    }
    if(a[i][j]>max[n+j+1])
    max[n+j+1]=a[i][j];

  }
}


int mn;
for(int i=0;i<n;i++){

  for(int j=0;j<n;j++){
    mn = std::min((max[i+1]-a[i][j]),(max[n+j+1]-a[i][j]));
    a[i][j]=mn+a[i][j];

  }
}
for(int i=0;i<n;i++){
  for ( int j=0 ;j<n; j++) {
    cout<<a[i][j]<<" ";
  }
  cout<<endl;
}




  return 0;
}
