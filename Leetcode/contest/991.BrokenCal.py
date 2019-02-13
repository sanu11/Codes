class Solution(object):
    def convert(self,m,n):
            if m == n:
                return 0
            if(m>n):
                return m-n
            if(m<=0 and n>0):
                return -1
            if(n%2==1):
                return 1 + self.convert(m,n+1)
            else:
                return 1 + self.convert(m,n/2)
            
    def brokenCalc(self, X, Y):
        """
        :type X: int
        :type Y: int
        :rtype: int
        """
#         class Node:
#             def __init__(self,val,level=0):
#                 self.val = val
#                 self.level = level
#         q = []
#         visited = [] 
#         q.append(Node(X,0))
        
#         if(X<Y):
#             while(len(q)!=0):
#                 temp = q[0]
#                 q = q[1:]
#                 visited.append(temp.val)

#                 if(temp.val == Y):
#                     return temp.level

#                 if(temp.val*2 == Y or temp.val -1 == Y):
#                     return temp.level+1

#                 if(temp.val*2 not in visited):
#                     q.append(Node(temp.val*2,temp.level+1))

#                 temp2 = temp.val-1
#                 print temp.val

#                 if (temp2 >=0 and temp2 not in visited):
#                     q.append(Node(temp2,temp.level+1))

#         else:
#             return X-Y
        m=X
        n=Y
        if(m>=n):
            return m-n
        else:
            return self.convert(X,Y)
            