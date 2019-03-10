class Solution(object):
    def matrixReshape(self, nums, r, c):
        """
        :type nums: List[List[int]]
        :type r: int
        :type c: int
        :rtype: List[List[int]]
        """
        i=0
        j= 0
        res= []
        l=[]
        flag=0
        m = len(nums)
        n = len(nums[0])
        if(r*c!=m*n):
            return nums
        for num in nums:
            for num1 in num:
                l.append(num1)
                j+=1
                if(j==c):
                    res.append(l)
                    l=[]
                    j=0
                    i+=1
                    print l
        print i
        if(i>r):
            return nums
        return res
        