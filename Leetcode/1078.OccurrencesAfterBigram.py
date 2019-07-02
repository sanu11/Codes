class Solution(object):
    def findOcurrences(self, text, first, second):
        """
        :type text: str
        :type first: str
        :type second: str
        :rtype: List[str]
        """
        # n = len(text)
        answer=[]
        textList = text.split()
        n = len(textList)
        for i in range(0,n):
            if textList[i]==first:
                i+=1
                if(i<n):
                    if textList[i]==second:
                        i+=1
                        if(i<n):
                            answer.append(textList[i])
                    
                else:
                    i-=1
        
        return answer
            
        