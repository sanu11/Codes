class Solution(object):
    def toGoatLatin(self, S):
        """
        :type S: str
        :rtype: str
        """
        vowels=['a','e','i','o','u','A','E','I','O','U']
        temp = 'a'
        newS =""
        S = S.split(" ")
        for word in S:
            if word[0] not in vowels:
                newS=newS + word[1:]+word[0]
            else:
                newS+=word
            newS+='ma'+temp+" "
            temp+='a'
        return newS.strip()