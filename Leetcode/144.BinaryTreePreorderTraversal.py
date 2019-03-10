# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def preorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        # l=[]
        # self.recur(l,root)
        # return l
        
#         ITERATIVE
        stack=[]
        l=[]
        if root:
            stack.append(root)
        while(len(stack)!=0):
            node = stack.pop()
            l.append(node.val)
            if node.right:
                stack.append(node.right)
            if node.left:
                stack.append(node.left)
        return l

# RECURSION

#     def recur(self,l,root):
#         if root ==None:
#             return
#         l.append(root.val)
#         self.recur(l,root.left)
#         self.recur(l,root.right)
        