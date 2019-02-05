# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def inorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        p = root
        stack =[]
        l=[]
        while(p!=None or len(stack)!=0):
            
            while p!= None:
                stack.append(p)
                p = p.left
            
            p = stack.pop()
            l.append(p.val)
            
            p = p.right
        return l
            
            
                
        