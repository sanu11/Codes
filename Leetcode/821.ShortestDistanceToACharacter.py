class Solution(object):
    def shortestToChar(self, S, C):
        """
        :type S: str
        :type C: str
        :rtype: List[int]
        """
        n = len(S)
        prev = float('-inf')
        res=[]
        for i in range(0,n):
            if S[i] == C:
                prev = i
            res.append(i - prev)
        # print res
        prev = float('inf')
        for i in range(n-1,-1,-1):  
            if(S[i] == C):
                prev = i
            res[i] = min(prev-i,res[i])
        return res