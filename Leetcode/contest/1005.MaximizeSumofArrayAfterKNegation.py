class Solution(object):
    def largestSumAfterKNegations(self, A, K):
        """
        :type A: List[int]
        :type K: int
        :rtype: int
        """
        A.sort()
        # A=list(filter(lambda a: a != 0, A))
        c=0
        sum1=0
        flag=0
        zero=0
        maxNeg=-101
        minPos = 101
        for a in A:
            if a <= 0:
                c+=1
                if(a>maxNeg):
                    maxNeg=a
            elif a>=0:
                if a<minPos:
                    minPos = a
            if a==0:
                zero+=1
                
        
        n = len(A)   
        total=0
        print A
        for a in A:
            if(a<0):
                total+=-1*a
            else:
                total+=a
        print total
        
        if(c<=K<=c+zero):
            return total
        
        if(c<K):
            if(c!=0):
                if ((K-c)%2!=0):
                    print "hi",total
                    if(-1*maxNeg< minPos):
                        total+=2*maxNeg
                    else:
                        total-=2*minPos
            else:
                if(K%2!=0):
                    total-=2*A[0]
            print total
            return total
        
        if(K<c):
           
            sum1=0
            for i in range(0,K):
                sum1+=-1*A[i]
            for i in range(K,n):
                sum1+=A[i]
            return sum1
