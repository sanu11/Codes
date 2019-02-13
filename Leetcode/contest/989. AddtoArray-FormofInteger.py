class Solution(object):
    def addToArrayForm(self, A, K):
        """
        :type A: List[int]
        :type K: int
        :rtype: List[int]
        """
        n = len(A)
        total=0
        i=0
        while i<n:
            total+=A[i]*(10**(n-i-1))
            i+=1
        print total
        total+=K
        total = str(total)
        li = [int(i) for i in total]
        return li
        