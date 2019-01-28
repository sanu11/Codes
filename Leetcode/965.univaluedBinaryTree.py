# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isUnivalTree(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        value = self.recur(root,root.val)
        print root.val
        if value == 1:
            return False
        else:
            return True
       
        
    def recur(self,root,value):

        temp1=0
        temp2=0
        if(root.left!=None):
            print root.left.val
            if(root.left.val == value):
                temp1 =  self.recur(root.left,root.left.val)
            else:
                return 1
        if(root.right!=None):
            if(root.right.val == value):
                temp2 = self.recur(root.right,root.right.val)
            else:
                return 1
        return (max(temp1,temp2))
       
       
        