"""
# Definition for a Node.
class Node(object):
    def __init__(self, val, children):
        self.val = val
        self.children = children
"""
class Solution(object):
    l=[]
    def preorder(self, root):
        """
        :type root: Node
        :rtype: List[int]
        """
        self.l=[]
        self.recur(root)
        return self.l
        
        
    def recur(self,root):
        if(root!=None):
            if(root.children!=None):
                self.l.append(root.val)
                for child in root.children:
                    self.recur(child)
                
        