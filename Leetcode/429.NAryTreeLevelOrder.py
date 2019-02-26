"""
# Definition for a Node.
class Node(object):
    def __init__(self, val, children):
        self.val = val
        self.children = children
"""
class Solution(object):
    def levelOrder(self, root):
        """
        :type root: Node
        :rtype: List[List[int]]
        """
        queue = []
        queue.append(root)
        queue.append(Node(-1,[]))
        mainList = []
        l1=[]
        if(root==None):
            return []
        while(len(queue)!=0):
            flag=0
            node = queue.pop(0)
            # print node.val
            if node!=None:
                if(node.val == -1):
                    mainList.append(l1)
                    l1= [] 
                    if(len(queue)==0):
                        break
                    node = queue.pop(0)
                    flag=1
                    queue.append(Node(-1,[]))
                l1.append(node.val)
                if(len(node.children)>0):
                    for child in node.children:
                        queue.append(child)
                # if(flag):
                    
                # print queue
        return mainList
            
                
            
        