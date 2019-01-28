class Solution(object):
    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """
        x = 1
        temp = 1
        str1="1"
        str2=""
        for i in range(0,n-1):
            # temp = int(str1)
            len1 = len(str1)
            if(len1==1):
                str2 = "1"+str1
            else:
                prev = int(str1[0])
                print "str",str1
                str1 = str1[1:]
                count=1
                str2=""
                flag=0
                for let in str1:
                    num  = int(let)
                    if(num == prev):
                        count+=1
                    else:
                        str2+=str(count)+""+str(prev)
                        count = 1
                    prev = num
                
                str2+=str(count)+""+str(num)
            print "str2=",str2
            str1 = str2
        return str1
