class Solution(object):
    def reorderLogFiles(self, logs):
        """
        :type logs: List[str]
        :rtype: List[str]
        """
        listLetters = []
        listDigits = []
        for log in logs:
            temp = log.split()
            if(temp[1].isdigit()):
                listDigits.append(log)
            else:
                temp2  = ' '.join(temp[1:])
                listLetters.append(temp2 + " "+temp[0])
        listLetters.sort()
        newList = []
        for letter in listLetters:
            print letter
            temp = letter.split()
            temp2 = temp[-1] +" "+ ' '.join(temp[:-1])
            newList.append(temp2)
        return newList+listDigits