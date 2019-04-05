# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def rangeSumBST(self, root, L, R):
        """
        :type root: TreeNode
        :type L: int
        :type R: int
        :rtype: int
        """
        stack=[]
        totalSum=0
        stack.append(root)
        # if(not root):
            # return 0
        while stack:
            node = stack.pop()
            if node:
                if node.val>=L and node.val<=R:
                    totalSum+=node.val
                if node.val>L:
                    stack.append(node.left)
                if node.val<R:
                    stack.append(node.right)
            
        return totalSum
                
            
        