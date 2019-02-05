class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        s = s.split(' ')
        l=[]
        for word in s:
            l.append(word[::-1])
        return ' '.join(l)
        