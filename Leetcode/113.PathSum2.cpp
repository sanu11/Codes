/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int>n;
        vector<vector<int>> result;
        findPath(root,sum,n,result);
        return result;
         
     }
         
    
 void findPath(TreeNode *root, int sum, vector<int>path, vector<vector<int>>&result){
     
     if(root==NULL)
         return ;
     
    // cout<<"innn"<<root->val<<endl;
     if(root->left == NULL && root->right == NULL)
     {
         if(root->val ==sum){
            path.push_back(root->val);
             // cout<<"hi";
             result.push_back(path);
         }
         // else
         //    temp.pop();
         
     }
     // if()
      path.push_back(root->val);
     int n = path.size();
      // for(int i=0;i<n;i++)
         // cout<<path[i]<<" ";
     // cout<<endl;
     if(root->left)
     findPath(root->left,sum-root->val,path,result);
     if(root->right)
     findPath(root->right,sum-root->val,path,result);
     
    
    
}
};

