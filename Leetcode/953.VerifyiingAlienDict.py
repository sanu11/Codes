class Solution(object):
    def isAlienSorted(self, words, order):
        """
        :type words: List[str]
        :type order: str
        :rtype: bool
        """
        # orderList = list(order)
        # print order.index('a')
        n = len(words)
        j = 0
        flag=0
        for i in range(0,n-1):
            j=i+1
            m = len(words[i])
            l = len(words[j])
            k=0
            while k<m and k<l and words[i][k] == words[j][k]:
                k+=1
                
            if(k == min (m,l) and m > l):
                flag=1
                break
                
            elif(order.index(words[i][k]) > order.index(words[j][k])):
                flag =1
                break
                
        if(flag):
            return False
        else:
            return True
            
                
            
                
                
        