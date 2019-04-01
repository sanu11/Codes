class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """
        
        i=0 
        j=0
        
        k=0
        L = nums1[:]
        # nums1 = [0 for p in range(m+n)]
        print i,j,m,n
        while(i<m and j<n):
            # print "j"
            if(L[i]<=nums2[j]):
                nums1[k]=L[i]
                k+=1
                i+=1
                # print nums1
            else:
                nums1[k]=nums2[j]
                k+=1
                j+=1
                # print nums1
            # print nums1

        while(i<m):
            nums1[k]=L[i]
            i+=1
            k+=1

        while(j<n):
            nums1[k]=nums2[j]
            j+=1
            k+=1
                
        # print nums1
        # return nums1
                