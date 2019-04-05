class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        mapNum={}
        for num in numbers:
            mapNum[num] = mapNum.get(num,0)+1
        
        for num in numbers:
            second = target-num
            if(second!=num):
                if(mapNum.get(second,0)>=1):
                    return numbers.index(num)+1,numbers.index(second)+1
            else:
                if(mapNum.get(num,0)>=2):
                    first = numbers.index(num)
                    numbers[first]=999999999
                    sec = numbers.index(num)
                    return first+1,sec+1
        