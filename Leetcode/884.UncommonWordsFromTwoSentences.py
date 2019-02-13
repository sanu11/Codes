class Solution(object):
    def uncommonFromSentences(self, A, B):
        """
        :type A: str
        :type B: str
        :rtype: List[str]
        """
        dict1={}
        C = A.split(" ") + B.split(" ")
        l=[]
        print C
        for a in C:
            if (dict1.get(a,-1) == -1):
                dict1[a] = 1
            else:
                dict1[a]+=1
        print dict1
        
        for key in dict1:
            if(dict1[key] == 1):
                l.append(key)
        return l
        # return [x[0] for x in (collections.Counter(" ".join([A, B]).split(" "))).items() if x[1] == 1]
