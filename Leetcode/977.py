class Solution(object):
    def sortedSquares(self, A):
        """
        :type A: List[int]
        :rtype: List[int]
        """
        li = [ x**2 for x in A ]
        li.sort()
        return li