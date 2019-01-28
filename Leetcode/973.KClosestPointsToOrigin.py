class Solution(object):
    def kClosest(self, points, K):
        """
        :type points: List[List[int]]
        :type K: int
        :rtype: List[List[int]]
        """
        list1 = [(math.sqrt(point[0]**2+point[1]**2),point) for point in points]
        list2= sorted(list1)[:K]
        return [x[1] for x in list2]
       
                          