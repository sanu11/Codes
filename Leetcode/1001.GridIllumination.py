class Solution(object):
    def gridIllumination(self, N, lamps, queries):
        """
        :type N: int
        :type lamps: List[List[int]]
        :type queries: List[List[int]]
        :rtype: List[int]
        """
        rows={}
        columns={}
        leftdiag={}
        rightdiag={}
        ans=[]
        lamp_set = set()
        for lamp in lamps:
            x=lamp[0]
            y=lamp[1]
            if rows.get(x,0)==0:
                rows[x]=1
            else:
                rows[x]+=1
            
            if columns.get(y,0)==0:
                columns[y]=1
            else:
                columns[y]+=1
            
            if leftdiag.get(x+y,0) == 0:
                leftdiag[x+y] = 1
            else:
                leftdiag[x+y]+=1
                
            if(rightdiag.get(y-x,0)==0):
                rightdiag[y-x]=1
            else:
                rightdiag[y-x]+=1
            
            lamp_set.add((x,y))
            
        for query in queries:
            x = query[0]
            y= query[1]
          
            if(rows.get(x,0)>=1) or columns.get(y,0)>=1 or leftdiag.get(x+y,0)>=1 or rightdiag.get(y-x,0)>=1:
                ans.append(1)
            else:
                ans.append(0)
                
#       delete
            for x1 in range(x-1,x+1):
                for y1 in range(y-1,y+1):
                    if x1<0 or x1>=N or y<0 or y>=N:
                        continue
                    else:
                        if (x1,y1) in lamp_set:
                            rows[x1]-=1
                            columns[y1]-=1
                            leftdiag[x1+y1]-=1
                            rightdiag[y1-x1]-=1
                            lamp_set.remove((x1,y1))
            # print lamp_set
                
        return ans
                
                
                