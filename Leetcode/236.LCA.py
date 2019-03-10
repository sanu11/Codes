# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def lowestCommonAncestor(self, root, p, q):
        """
        :type root: TreeNode
        :type p: TreeNode
        :type q: TreeNode
        :rtype: TreeNode
        """    
        if(root == None):
            return None
        
        if( root.val == p.val or root.val == q.val ):
            return root
        
        nodeLeft = self.lowestCommonAncestor(root.left,p,q)
        nodeRight = self.lowestCommonAncestor(root.right,p,q)
        
        if nodeLeft != None and nodeRight !=None:
            return root
        else:
            if nodeLeft == None:
                return nodeRight
            return nodeLeft