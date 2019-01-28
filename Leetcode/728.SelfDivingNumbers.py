class Solution(object):
    def selfDividingNumbers(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: List[int]
        """
        l=[]
        for num in range(left,right+1):
            if(num/10==0):
                l.append(num)
            else:
                final=num
                flag=0
                while num:
                    temp = num%10
                    if(temp==0):
                        flag=1
                    elif(final%temp!=0):
                        flag=1
                    num/=10
                if(flag==0):
                    l.append(final)
        return l