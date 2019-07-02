class Solution(object):
    def removeDuplicates(self, S):
        """
            :type S: str
            :rtype: str
            """
        # TLE - since after every new occurence of duplicate, i start from 0 again
        # n = len(S)
        # i=0
        # while 1:
        #     if i>=0 and i< n-1:
        #         if S[i] == S[i+1]:
        #             temp = S[0:i]
        #             if(i+2<n):
        #                 temp+=S[i+2:n]
        #             i=0
        #             S=temp
        #             n = len(S)
        #             # print S
        #         else:
        #             i+=1
        #     else:
        #         break
        # return S
        
        i=0
        n = len(S)
        temp2=S
        while i<n and i>=0:
            if i<n-1:
                if S[i] == S[i+1]:
                    temp = S[0:i]
                    if(i+2<n):
                        temp+=S[i+2:]
                    S = temp
                    i-=1
                    if(i<0):
                        i+=1
                    n = len(S)
                # print S,i,n
                else:
                    i+=1
        else:
            break
        return S

