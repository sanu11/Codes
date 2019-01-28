class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        y = str(x)
        
        flag=0
        if(y[0] == '-'):
            y = y[1:]
            flag=1
            lenY = len(y)-1
        lenY = len(y)
        y = y[::-1]
        i=0
        while i<lenY and y[i] == '0':
            i+=1
        y = y[i:]
        if(i == lenY):
            y ='0'
        # print y
        y = int(y)
        if( y >= pow(2,31)):
            return 0
        elif(y< pow(-2,31)):
            return 0
        else:
            if(flag==1):
                temp = "-"+str(y)
                return int(temp)
            else:
                return y
        # print int(y)
        