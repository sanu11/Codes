class Solution(object):
    def sortArrayByParityII(self, A):
        """
        :type A: List[int]
        :rtype: List[int]
        """
        n = len(A)
        i=0
        j=1
        while(i<n and j<n):
            if(A[i]%2!=0 and A[j]%2==0):
                A[i],A[j]=A[j],A[i]
            elif(A[i]%2==0):
                i+=2
            elif(A[j]%2!=0):
                j+=2
        return A