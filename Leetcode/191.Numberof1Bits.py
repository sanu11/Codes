class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        mask = 1
        i=0
        bits=0
        while(i<32):
            if mask&n!=0:
                bits+=1
                # print i,
            i+=1
            # print mask
            mask = mask<<1
           
        return bits