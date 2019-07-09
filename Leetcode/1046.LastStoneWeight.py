class Solution(object):
    def lastStoneWeight(self, stones):
        """
        :type stones: List[int]
        :rtype: int
        """
        
        while(len(stones)>0):
            stones.sort(reverse=True)
            if(len(stones)>=2):
                x=stones.pop(0)
                y=stones.pop(0)
                if(abs(y-x)!=0):
                    stones.append(abs(y-x))
            else:
                return stones.pop(0)
            print stones
        return 0