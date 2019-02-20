class Solution(object):
    def distributeCandies(self, candies):
        """
        :type candies: List[int]
        :rtype: int
        """
        l={}
        n = len(candies)
        for candy in candies:
            if l.get(candy,0) == 0:
                l[candy] = 1
            else:
                l[candy]+=1
        
        kinds =  len(l.keys())
        print kinds
        if(kinds<=n/2):
            return kinds
        else:
            return n/2
        