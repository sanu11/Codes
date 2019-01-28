class Solution(object):
    def peakIndexInMountainArray(self, A):
        """
        :type A: List[int]
        :rtype: int
        """
        lo=0
        hi=len(A)-1
        while lo<=hi:
            mid = (lo+hi)/2
            print mid
            if(A[mid]>A[mid+1] and A[mid]>A[mid-1]):
                return mid
#             we are in the first part
            elif(A[mid]<A[mid+1]):
                lo = mid+1
#             we are in second part
            else:
                hi=mid-1
            
                