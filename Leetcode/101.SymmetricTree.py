# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isSymmetric(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        queue = []
        queue.append(root)
        queue.append(None)
        l = []
        ans=[]
        if(not root):
            return True
        while(len(queue)>0):
            
            node = queue.pop(0)
            
            if(node==None):
                ans.append(l)
                if l.count(999999999) == len(l):
                    break
                l=[]
                if(len(queue)>0):
                    queue.append(None)
            else:
                if (node.val == 999999999):
                    l.append(node.val)

                else:
                    l.append(node.val)
                    if(node.left and node.right):
                        queue.append(node.left)
                        queue.append(node.right)
                    elif node.left:
                        queue.append(node.left)
                        queue.append(TreeNode(999999999))
                    elif node.right:
                        queue.append(TreeNode(999999999))
                        queue.append(node.right)
                    else:
                        queue.append(TreeNode(999999999))
                        queue.append(TreeNode(999999999))

            
        m = len(ans)
        # print ans
        count=0
        for l in ans[1:]:
            mid = len(l)/2
            first = l[:mid]
            second =  l[mid:][::-1]
            if  first==second: 
                count+=1
            # print first,second,"\n"
        if count == m-1:
            return True
        else:
            return False
        
                
        