class Solution(object):
    def numberOfLines(self, widths, S):
        """
        :type widths: List[int]
        :type S: str
        :rtype: List[int]
        """
        total=0
        ans=[]
        n = len(S)
        lines=0
        for i in range(0,n):
            temp = widths[ord(S[i])-ord('a')]
            total+= temp
            if(total>100):
                lines+=1
                total = temp 
            # print total
                
        if(total<=100):
            lines+=1
#         if(total == 100):
            
        ans.append(lines)
        ans.append(total)
        return ans
       