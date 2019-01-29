"""
# Definition for a Node.
class Node(object):
    def __init__(self, val, children):
        self.val = val
        self.children = children
"""
class Solution(object):
    mxHeight=0
    def maxDepth(self, root):
        """
        :type root: Node
        :rtype: int
        """
        self.mxHeight=0
        self.recur(root,0)
        return self.mxHeight
    
    def recur(self,root,height):
        if (root!=None):
            height+=1
            # print root.children
            if(len(root.children)==0):
                print height
                self.mxHeight = max(height,self.mxHeight)
                height=0
            else:
                for child in root.children:
                    self.recur(child,height)
            
        