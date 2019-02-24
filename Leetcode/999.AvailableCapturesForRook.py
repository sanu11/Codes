class Solution(object):
    def numRookCaptures(self, board):
        """
        :type board: List[List[str]]
        :rtype: int
        """
        flag=0
        for i in range(0,8):
            for j in range(0,8):
                if board[i][j] == 'R':
                    flag=1
                    break
            if flag:
                break
        row=i
        col=j
        print i,j
        i = row
        j = 0
        pawn =-1
        bishop = -1
        count = 0 
        while(j<col):
            if board[row][j] == 'p':
                pawn = j
            if board[row][j] == 'B':
                bishop = j
            j+=1
                
        if(pawn> bishop):
            count+=1
        
        j = 7
        pawn = 8
        bishop = 8
        while(j>col):
            if board[row][j] == 'p':
                pawn = j
            if board[row][j] == 'B':
                bishop = j
            
            j-=1
      
        if(pawn<bishop):
            count+=1
        print count
        
        i = 0
        pawn = -1
        bishop = -1
        while(i<row):
            if board[i][col] == 'p':
                pawn = i
            if board[i][col] == 'B':
                bishop = i
            i+=1
            
        if pawn>bishop:
            count+=1
        
        i = 7
        pawn = 7
        bishop = 7
        while(i>row):
            if board[i][col] == 'p':
                pawn = i
            if board[i][col] == 'B':
                bishop = i
            i-=1
        
        if (pawn < bishop):
            count+=1
        return count
            
            
            
                
        