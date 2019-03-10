class Solution(object):
    def clumsy(self, N):
        """
        :type N: int
        :rtype: int
        """
        total=0
        # n = len(N)
        n = N
        num=N
        temp = N
        num = N-1
        i=0
        l=[]
        total=0
        while(i<N):
            # print temp
            
            if(i<n and num!=0):
                temp*=num
                num-=1
                i+=1
            if(i<n and num!=0):
                temp=temp/num
                num-=1
                i+=1
            if(i<n):
                # temp = temp + num
               
                i+=1
                total+=num
                num-=1
            l.append(temp)
            # print temp,num,total
            if(i<n):
                # temp = temp - num    
                # num-=1
                i+=1
            # print temp
           
                temp = num
                # print "new temp",temp
                num-=1
           
        # print total,l
        total+=l[0]
        for i in l[1:]:
            total-=i
        return total
                