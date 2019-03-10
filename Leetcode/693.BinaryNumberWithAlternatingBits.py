class Solution(object):
    def hasAlternatingBits(self, n):
        """
        :type n: int
        :rtype: bool
        """
# n^(n>>1) == 0 is true for this situation but it can be true elsewhere as well.
# eg; 100^(010) is 0 as well

#         this will have all ones.
        allOnes =  n^(n>>1)
#      check for all ones
        return allOnes &(allOnes +1) == 0
        
            
        
            
        