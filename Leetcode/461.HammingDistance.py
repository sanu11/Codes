class Solution(object):
    def hammingDistance(self, x, y):
        """
        :type x: int
        :type y: int
        :rtype: int
        """
        temp = x^y
        binary =  bin(temp)
        # sum1=0
        onesList = [ones for ones in binary if ones == '1']
        return len(onesList)
        