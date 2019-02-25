class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int i = 0;
        int j = 0;
        int n = matrix[0].size();
        int m = matrix.size();
        int temp;
        int k;
        for(j=0;j<n;j++){
             k = j;
            int i=0;
            temp = matrix[i][k];
            i++;
            k++;
            while(i<m && k<n)  {
                if(matrix[i][k]!=temp){
                    return false;
                }
                // cout<<i<<" "<<k;
                i++;
                k++;
                    
            }  
            
        }
        
        i=1;
        j=0;
        for(;i<m;i++){
            k = i;
            j=0;
            temp = matrix[k][j];
            k++;
            j++;
            while(k<m &&j <n){
            if(matrix[k][j]!=temp)
                return false;
            k++;
            j++;
            }
            
        }
        
        return true;
        
    }
};