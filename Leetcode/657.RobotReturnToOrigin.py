class Solution(object):
    def judgeCircle(self, moves):
        """
        :type moves: str
        :rtype: bool
        """
        y=0
        x=0
        len1 = len(moves)
        for i in range(0,len1):
            if moves[i]=='U':
                y+=1
            if moves[i]=='D':
                y-=1
            if moves[i]=='L':
                x-=1
            if moves[i]=='R':
                x+=1
        if x==0 and y==0:
            return True
        else:
            return False
        