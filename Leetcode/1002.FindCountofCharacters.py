from collections import Counter
class Solution(object):
    def commonChars(self, A):
        """
        :type A: List[str]
        :rtype: List[str]
        """
        
        c = Counter(A[0])
        for word in A[1:]:
            d = Counter(word)
            c = c & d
          
        return list(c.elements())