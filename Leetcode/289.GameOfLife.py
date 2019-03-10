class Solution(object):
    def gameOfLife(self, board):
        """
        :type board: List[List[int]]
        :rtype: None Do not return anything, modify board in-place instead.
        """
        
        m = len(board)
        n = len(board[0])
        for i in range(0,m):
            for j in range(0,n):
                count =0 
                indices = [(i-1,j-1),(i-1,j),(i-1,j+1),(i,j-1),(i,j+1),(i+1,j-1),(i+1,j),(i+1,j+1)]
                for r,c in indices:
                    if 0<=r<m and 0<=c<n:
                        if board[r][c] & 1:
                            count+=1
                            
                if board[i][j] == 1:
#                     store 01 
                    if count < 2 or count >3:
                        continue
                    else:
#                     store 11
                        board[i][j]|=2
                else:
                    if count == 3:
#                     store 10
                        board[i][j] |=2
        
        for i in range(0,m):
            for j in range(0,n):
                board[i][j] = board[i][j] >> 1
                    
        
                        
                