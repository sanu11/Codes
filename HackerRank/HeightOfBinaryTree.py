class Node:
    def __init__(self, info): 
        self.info = info  
        self.left = None  
        self.right = None 
        self.level = None 

    def __str__(self):
        return str(self.info) 

class BinarySearchTree:
    def __init__(self): 
        self.root = None

    def create(self, val):  
        if self.root == None:
            self.root = Node(val)
        else:
            current = self.root
         
            while True:
                if val < current.info:
                    if current.left:
                        current = current.left
                    else:
                        current.left = Node(val)
                        break
                elif val > current.info:
                    if current.right:
                        current = current.right
                    else:
                        current.right = Node(val)
                        break
                else:
                    break

# Enter your code here. Read input from STDIN. Print output to STDOUT
'''
class Node:
      def __init__(self,info): 
          self.info = info  
          self.left = None  
          self.right = None 
           

       // this is a node of the tree , which contains info as data, left , right
'''
def recur(root):
    if root != None:        
        h1 = recur(root.left)
        h2 = recur(root.right)
        mx = max(h1,h2)+1
        return mx
    else:
        return 0

def height3(root):
    if(root==None):
        return 0
    q = []
    q.insert(0,root)
    height=0
    while(1):
        nodeCount = len(q)
        if(nodeCount==0):
            return height
        height+=1
       
        while nodeCount!=0:
            temp = q.pop()
            if(temp.left!= None):
                q.insert(0,temp.left)
            if(temp.right!=None):
                q.insert(0,temp.right)
            nodeCount-=1

def height(root):
    # return iterative(root)-1
    return recur(root)-1

