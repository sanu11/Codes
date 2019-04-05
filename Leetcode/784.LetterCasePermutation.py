class Solution(object):
    def recur(self,S,i,n,mainList):
        
        # print S
        if(i==n):
            mainList.append(S)
        else:
            if S[i].isalpha():
                self.recur(S,i+1,n,mainList)
                tempList = list(S)
                tempList[i] = str(tempList[i]).upper()
                S = ''.join(tempList)
                self.recur(S,i+1,n,mainList)
            else:
                self.recur(S,i+1,n,mainList)
            # print mainList
        
    def letterCasePermutation(self, S):
        """
        :type S: str
        :rtype: List[str]
        """
        mainList =[]    
        self.recur(S.lower(),0,len(S),mainList)
        return mainList
