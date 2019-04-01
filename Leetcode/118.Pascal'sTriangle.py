class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        if(numRows==0):
            return []
        l = [1]
        ans=[]
        ans.append(l)
        for i in range(1,numRows):
            l=[1]
            for j in range(1,i):
                l.append(ans[i-1][j-1]+ans[i-1][j])
            l.append(1)
            ans.append(l)
        return ans