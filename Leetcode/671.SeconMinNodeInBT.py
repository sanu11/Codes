# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    
    def findSecondMinimumValue(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.ans =float('inf')
        minRoot = root.val
        self.dfs(root,minRoot)
        if(self.ans < float('inf')):
            return  self.ans
        else:
            return -1
        
    def dfs(self,node,minRoot):
        if node:
            if(node.val > minRoot and node.val < self.ans):
                self.ans = node.val
            elif node.val == minRoot:
                self.dfs(node.left,minRoot)
                self.dfs(node.right,minRoot)
           
                
        
        

                
            