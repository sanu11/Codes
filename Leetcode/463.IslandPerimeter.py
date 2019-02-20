class Solution(object):
    def islandPerimeter(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        n = len(grid)
        m = len(grid[0])
        count=0
        for i in range(0,n):
            for j in range(0,m):
                if grid[i][j] == 1:
                    if i == 0:
                        count+=1
                    elif grid[i-1][j] != 1:
                        count+=1
                    if j == 0:
                        count+=1
                    elif grid[i][j-1] != 1:
                        count+=1
                    if  i == n-1:
                        count+=1
                    elif grid[i+1][j]!=1:
                        count+=1
                    if j == m-1:
                        count+=1
                    elif grid[i][j+1]!=1:
                        count+=1
                # print count
        return count
                    
            