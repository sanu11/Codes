class Solution(object):
    def fib(self, N):
        """
        :type N: int
        :rtype: int
        """
        if N == 0:
            return 0
        elif N == 1:
            return 1
        i=0
        j=1
        for k in range(0,N-1):
            temp = j
            j = i+j
            i = temp
        return j
        