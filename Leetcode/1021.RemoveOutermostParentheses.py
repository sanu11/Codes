class Solution(object):
    def removeOuterParentheses(self, S):
        """
        :type S: str
        :rtype: str
        """
        count=0
        i = 0
        start=0
        temp =""
        for s in S:
            if s == "(":
                count+=1
            if s == ")":
                count-=1
            i+=1
            if count == 0:
                # pri÷nt start,i
                temp+=S[start+1:i-1]
                start=i
                count=0
        return temp