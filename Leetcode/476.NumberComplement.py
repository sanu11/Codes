class Solution(object):
    def findComplement(self, num):
        """
        :type num: int
        :rtype: int
        """
        temp = num
        l=[]
        while(num):
            l.append(num%2)
            num/=2
            
        l= l[::-1]
        l = [1 if i == 0 else 0 for i in l ]
        print l
        
        n = len(l)
        sum1=0
        for i in range(0,n):
            if(l[i]==1):
                sum1+=pow(2,n-i-1)
        return sum1