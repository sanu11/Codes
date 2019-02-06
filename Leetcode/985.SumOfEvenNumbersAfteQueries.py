class Solution(object):
    def sumEvenAfterQueries(self, A, queries):
        """
        :type A: List[int]
        :type queries: List[List[int]]
        :rtype: List[int]
        """
        evenSum = sum([num for num in A if not num%2])
        # print evenSum
        index=0
        ans=[]
        n = len(queries)
        for que in queries:
            index=que[1]
            prev=A[index]
            A[index]+=que[0]
            if(prev%2==0):
                evenSum-=prev
            if(A[index]%2==0):
                evenSum+=A[index]
            ans.append(evenSum)
        return ans
            
        