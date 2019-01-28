class Solution(object):
    def diStringMatch(self, S):
        """
        :type S: str
        :rtype: List[int]
        """
        lo = 0
        s=[]
        hi = len(S)
        for let in S:
            if let == 'I':
                s.append(lo)
                lo+=1
            else:
                s.append(hi)
                hi-=1
        s.append(hi)
        return s
        
        