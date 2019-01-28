class Solution(object):
    def flipAndInvertImage(self, A):
        """
        :type A: List[List[int]]
        :rtype: List[List[int]]
        """
        len1 = len(A)
        rang = len1/2
        # print rang
        for row in A:
            for i in range(0,rang):
                n = len1 - 1 -i
                print i,n,row[i] ^ row[n]
                if(row[i] ^ row[n] == 0):
                    row[i]= row[i]^1
                    row[n]= row[n]^1 
            if(len1%2==1):
                row[rang] = row[rang]^1
            
        return A
                    
                
        