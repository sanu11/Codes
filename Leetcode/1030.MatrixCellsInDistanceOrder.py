class Solution(object):
    def allCellsDistOrder(self, R, C, r0, c0):
        """
        :type R: int
        :type C: int
        :type r0: int
        :type c0: int
        :rtype: List[List[int]]
        """
        #2 ways - 1st using BFS 2nd - calculate all the dist, store, sort by dist.
        
        #2nd way:
        distances={}
        for i in range(0,R):
            for j in range(0,C):
                distances[(i,j)] = abs(r0-i)+abs(c0-j)
        #sorts based on values, but returns the keys
        distances= sorted(distances,key=distances.__getitem__)
        distances = [list(elm) for elm in distances]    
        return distances