class Solution(object):
    def findWords(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        l1 = ['Q','W','E','R','T','Y','U','I','O','P']
        l2 = ['A','S','D','F','G','H','J','K','L']
        l3 = ['Z','X','C','V','B','N','M']
        l1 = l1+ [x.lower() for x in l1]
        l2 = l2+ [x.lower() for x in l2]
        l3 = l3+ [x.lower() for x in l3]
        ans = []
        for word in words:
            x = word[0]
            l=[]
            flag=0
            if x in l1:
                l = l1
            elif x in l2:
                l = l2
            else:
                l=l3
            for letter in word:
                if letter not in l:
                    flag = 1
            if flag == 0:
                ans.append(word)
        return ans