class Solution(object):
    def repeatedSubstringPattern(self, s):
        """
        :type s: str
        :rtype: bool
        """
        temp = s+s
        print temp[1:-1].find("sanika")
        if(temp[1:-1].find(s) != -1):
            return True
        else:
            return False
            
    
        