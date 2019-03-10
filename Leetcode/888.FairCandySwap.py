# The average of both sums will be the total amount that both of them will have at the end. This means if we have to add some value reqA to A, the same value reqA will be subtracted from B and vice versa.
# We add that required value (reqA) to an element of A (a) and if that exists in B we have our answer.
# Here, suppose that required value is reqA (reqA = finalTotal - sumA ) therefore if b exists such that b = a + reqA, then (b - reqA = a ), exists as well, thus we don't need to check if B follows the given criteria. Only checking if a+ reqA is present in B is enough.

class Solution(object):
    def fairCandySwap(self, A, B):
        """
        :type A: List[int]
        :type B: List[int]
        :rtype: List[int]
        """
        sumb = sum(B)
        suma = sum(A)
        finalTotal = (suma+sumb)/2
        setB = set(B)
        reqA = finalTotal - suma 
#   checking one condition is enough here.. because if one needs +x other needs -x to make the total same.
      
        for a in A:
            if a+reqA in setB :
                return a,a+reqA
                
         