class Solution(object):
    def gameOfLife(self, board):
        """
        :type board: List[List[int]]
        :rtype: None Do not return anything, modify board in-place instead.
        """
        # n = len(board)
        # item = []
        # temp = [0 for i in range(0,n+1)]
        # item.append(temp)
        # # print item
        # for row in board:
        #     temp=[0]
        #     # temp.append(0)
        #     temp.extend(row)
        #     temp.append(0)
        #     item.append(temp)
        #     # print temp
        # # print item
        # temp = [0 for i in range(0,n+1)]
        # # print temp
        # item.append(temp)
        # print 0<<2
        
        m = len(board)
        n = len(board[0])
        for i in range(0,m):
            for j in range(0,n):
                count =0 
                indices = [(i-1,j-1),(i-1,j),(i-1,j+1),(i,j-1),(i,j+1),(i+1,j-1),(i+1,j),(i+1,j+1)]
                for r,c in indices:
                    if 0<=r<m and 0<=c<n:
                        if board[r][c] >= 1:
                            count+=1
                            
                if board[i][j] == 1:
                    if count < 2 or count >3:
                        board[i][j] = 2
                else:
                    if count == 3:
                        board[i][j] = -1
        
        for i in range(0,m):
            for j in range(0,n):
                if board[i][j] == 2:
                    board[i][j]=0
                elif board[i][j] == -1:
                    board[i][j] = 1
                    
                    
                        
                        
                