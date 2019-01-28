class Solution(object):
    def arrayPairSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        nums=nums[0::2]
        # print nums
        # print sum(nums)
        # map(lambda x:sum1+=x, nums)
        return sum(nums)
        