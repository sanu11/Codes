class Solution(object):
    def countPrimeSetBits(self, L, R):
        """
        :type L: int
        :type R: int
        :rtype: int
        """
        primes = [2,3,5,7,11,13,17,19]
        total=0
        for x in range(L,R+1):
            total+= bin(x).count('1') in primes
        return total
            
        