class Solution(object):
    def largestPerimeter(self, A):
        """
        :type A: List[int]
        :rtype: int
        """
        A.sort()
        n = len(A)
        for i in range(n-1,1,-1):
            if A[i-2] +A[i-1]> A[i]:
                return A[i-1] +A[i-2]+ A[i]
        return 0
        