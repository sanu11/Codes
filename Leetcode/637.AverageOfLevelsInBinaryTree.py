# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def averageOfLevels(self, root):
        """
        :type root: TreeNode
        :rtype: List[float]
        """
        queue = []
        queue.append(root)
        queue.append(None)
        count=0
        ans = []
        sum1=0
        while(len(queue)!=0):
            node = queue.pop(0)
            if node == None:
                if count!=0:
                    ans.append(float(sum1)/count)
                sum1=0
                count=0
                if(len(queue)==0):
                    break
                queue.append(None)
            else:
                sum1+=node.val
                count+=1
                if(node.left!=None):
                    queue.append(node.left)
                if(node.right!=None):
                    queue.append(node.right)
                
        return ans    
            
        