class Solution(object):
    def sortArrayByParity(self, A):
        """
        :type A: List[int]
        :rtype: List[int]
        """
        # even = []
        # odd = []
        # for a in A:
        #     if a%2 == 0:
        #         even.append(a)
        #     else:
        #         odd.append(a)
        # return even+odd

        # another solution:
        A.sort(key = lamda x: x%2)
        return A