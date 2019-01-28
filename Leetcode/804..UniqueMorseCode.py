import string
class Solution(object):
    def uniqueMorseRepresentations(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        values = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        # keys = string.ascii_lowercase
        # morseCode = dict(zip(keys,values))
        setOfCodes = set()
        # print morseCode
        for word in words:
            newWord=[]
            for let in word:
                # print morseCode[let]
                # print ord(let)-ord('a')
                newWord.append(values[ord(let)-ord('a')])
            setOfCodes.add(''.join(newWord))
            # print newWord
        print setOfCodes
        return len(setOfCodes)
        
        
        