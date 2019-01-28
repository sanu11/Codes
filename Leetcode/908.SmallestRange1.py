class Solution(object):
    def smallestRangeI(self, A, K):
        """
        :type A: List[int]
        :type K: int
        :rtype: int
        """
        A.sort()
        A=A[::-1]
        if(len(A)>1):
            temp = A[0] - A[len(A)-1]
        else:
            return 0
        if(temp<=K*2):
            return 0
        else:
            return abs(temp - 2*K)
        
        