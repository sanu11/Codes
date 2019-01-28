class Solution(object):
    def minDeletionSize(self, A):
        """
        :type A: List[str]
        :rtype: int
        """
        # len1 = len(A)
        # len2 = len(A[0])
        mainCount=0
        # for i in range(0,len2):
        #     flag=0
        #     for j in range(0,len1-1):
        #         if A[j][i] > A[j+1][i]:
        #             flag=1
        #     if flag == 1:
        #         mainCount+=1
        # return mainCount
    
#     another solution
        colLen = len(A)
        for col in zip(*A):
            for i in range(0,colLen-1):
                if col[i] > col[i+1]:
                    mainCount+=1
                    break
        return mainCount

    
                
        