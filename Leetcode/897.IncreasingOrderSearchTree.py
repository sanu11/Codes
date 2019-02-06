# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def increasingBST(self, root):
        """
        :type root: TreeNode
        :rtype: TreeNode
        """
        self.cur = TreeNode(-1)
        newRoot = self.cur
        self.recur(root)
        # print self.cur.val
        # print self.cur.right.val
        return newRoot.right
        
    def recur(self,root):
        if(root == None):
            return
        self.recur(root.left)
        self.cur.right = root
        # print self.cur.val
        # print self.cur.right.val
        self.cur = root
        root.left = None
        self.recur(root.right)