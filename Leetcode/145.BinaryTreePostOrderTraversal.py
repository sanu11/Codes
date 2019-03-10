# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def postorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
#         Using 2 stacks - its easy to give the reverse output which is root right left which is similar to preorder i.e root left right just that the order of left and right are different here. so we can use the same algo that we used for preorder
        stack = []
        main  = []
        if(root):
            stack.append(root)
        while(len(stack)!=0):
            root = stack.pop()
            main.append(root.val)
            if(root.left):
                stack.append(root.left)
            if(root.right):
                stack.append(root.right)
            
       
        return main[::-1]
            
            
            
            
            
            
            
            
        