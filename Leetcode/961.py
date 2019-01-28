class Solution(object):
    def repeatedNTimes(self, A):
        """
        :type A: List[int]
        :rtype: int
        """
        A.sort()
        prev = A[0]
        n = len(A)
        for i in range(1,n):
            if prev == A[i]:
                return A[i]
            else:
                prev  = A[i]
                
            
        