import sys
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    
    def recur(self,root,minval,maxval):
        if root == None:
            return True
        if root.val <= minval or root.val >= maxval:
            return False
        return self.recur(root.left,minval,root.val) and self.recur(root.right,root.val,maxval) 
        
    def isValidBST(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        return self.recur(root,-sys.maxint, sys.maxint)