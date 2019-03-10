class Solution(object):
    def findJudge(self, N, trust):
        """
        :type N: int
        :type trust: List[List[int]]
        :rtype: int
        """
        n= N
        res = [0 for i in range(0,n+1)]
        for list1 in trust:
            key = list1[0]
            value = list1[1]
            res[key]+=1
    
        count =0 
        index =0
        for temp in range(1,n+1):
            if res[temp] == 0:
                count+=1
                index = temp
        
        print count
        if count>1:
            return -1
        
    
        count=0
        for list1 in trust:
            value = list1[1]
            if value == index:
                count+=1
                
        print count
        
        if(count == n-1):
            return index
        else:
            return -1
    