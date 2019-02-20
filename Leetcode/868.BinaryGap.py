class Solution(object):
    def binaryGap(self, N):
        """
        :type N: int
        :rtype: int
        """
        temp = N
        l=[]
        i=0
        while(N):
            l.append(N%2)
            N=N/2
    
        n = len(l)
        l.reverse()
        print l
        diff =0
        first =0
        second=0
        
        for i in range(0,n):
            if l[i] == 1:
                second = first
                first = i
                diff = max(abs(second - first), diff)
        return diff
    
                
        