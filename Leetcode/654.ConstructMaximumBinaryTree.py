# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def find_max(self,nums,l,r):
        max_i = l;
        for i in range(l,r):
            if nums[i] > nums[max_i]:
                max_i = i
        return max_i
        
    def construct(self,nums,l,r):
        if l == r:
            return None
        max_index = self.find_max(nums,l,r)
        root = TreeNode(nums[max_index])
        root.left = self.construct(nums,l,max_index)
        root.right = self.construct(nums,max_index+1,r)
        return root
        
    def constructMaximumBinaryTree(self, nums):
        """
        :type nums: List[int]
        :rtype: TreeNode
        """
        return self.construct(nums,0,len(nums))
        
        