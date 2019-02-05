class Solution(object):
    def reverseString(self, s):
        """
        :type s: List[str]
        :rtype: void Do not return anything, modify s in-place instead.
        """
        n =len(s)
        for i in range(0,n/2):
            s[i],s[n-i-1] = s[n-i-1],s[i]
        print s
        