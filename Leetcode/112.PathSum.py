# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def calculate(self,root,sum,value):
        if(root.left == None and root.right == None):
            if value == sum:
                return True
            else:
                return False
        a,b = False,False
        if(root.left):
            a=self.calculate(root.left,sum,value+root.left.val)
        if(root.right):
            b=self.calculate(root.right,sum,value+root.right.val)
        return a|b
        
    def hasPathSum(self, root, sum):
        """
        :type root: TreeNode
        :type sum: int
        :rtype: bool
        """
        if(root!=None):
            return self.calculate(root,sum,root.val)
        else:
            return False