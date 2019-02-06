# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def leafSimilar(self, root1, root2):
        """
        :type root1: TreeNode
        :type root2: TreeNode
        :rtype: bool
        """
        def dfs(root,l1):
            if root!=None:
                if root.left == None and root.right == None:
                    l1.append(root.val)
                else:
                    dfs(root.left,l1)
                    dfs(root.right,l1)
        
        self.l1= []
        self.l2= []
        dfs(root1,self.l1)
        dfs(root2,self.l2)
        # print self.l1,self.l2
        
        return self.l1 == self.l2
      