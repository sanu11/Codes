#include<bits/stdc++.h>
int distancesum(int arr[], int n) 
{ 
    // sorting the array. 
    sort(arr, arr + n); 
  
    // for each point, finding the distance. 
    int res = 0, sum = 0; 
    for (int i = 0; i < n; i++) { 
        res += (arr[i] * i - sum); 
        sum += arr[i]; 
    } 
  
    return res; 
} 
  
int totaldistancesum(int x[], int y[], int n) 
{ 
    return distancesum(x, n) + distancesum(y, n); 
} 

int main(){

    int t,m,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        vector<string>str;
        char x[m];
        int a[n+1][m+1]={0};
        for(int i=0;i<n;i++){
            
        scanf("%s",x);
            str.push_back(x);
        }
        
        vector< pair <int,int> > ones;
        
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                a[i][j] = str[i-1][j-1]-'0';
    
            
            
    }


return 0;
}  