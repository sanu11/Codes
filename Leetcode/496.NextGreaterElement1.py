class Solution(object):
    def nextGreaterElement(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        nextGrtr = {}
        stack = []
        if(len(nums1))>1:
            stack.append(nums2[0])
            for num in nums2[1:]:
    #             num is the greater element for current stack top
                if num > stack[-1]:
                    while(len(stack)!=0  and stack[-1] < num):
                        nextGrtr[stack.pop()] = num

                stack.append(num)
            while len(stack)!=0:
                nextGrtr[stack.pop()] =-1
            print nextGrtr
        res = []
        for num in nums1:
            res.append(nextGrtr[num])
        return res
        