"""
# Definition for a Node.
class Node(object):
    def __init__(self, val, children):
        self.val = val
        self.children = children
"""
class Solution(object):
    l=[]
    def postorder(self, root):
        """
        :type root: Node
        :rtype: List[int]
        """
        self.l=[]
        return self.recur(root)
    
    def recur(self,root):
        if(root!=None):
            if(root.children!=None):
                for child in root.children:
                    self.recur(child)
            self.l.append(root.val)
        return self.l