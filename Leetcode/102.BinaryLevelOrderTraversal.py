# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        queue = []
        res=[]
        l=[]
        if(root):
            queue.append(root)
            queue.append(None)
        while(len(queue)!=0):
            node = queue.pop(0)
            
            if(node == None):
                res.append(l)
                l=[]
                # print "none"
                if(len(queue)!=0):
                    queue.append(None)
                else:
                    break
            else:
                # print node.val
                l.append(node.val)

                if(node.left):
                    queue.append(node.left)
                if(node.right):
                    queue.append(node.right)
        return res
        