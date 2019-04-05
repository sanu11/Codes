class Solution(object):
    def subdomainVisits(self, cpdomains):
        """
        :type cpdomains: List[str]
        :rtype: List[str]
        """
        domainDict={}
        for domains in cpdomains:
            temp = domains.split()
            temp2 = temp[1].split(".")
            n = len(temp2)

            for i in range(0,n):
                subdomain='.'.join(temp2[i:])
                if(domainDict.get(subdomain,-1)==-1):
                    domainDict[subdomain]=int(temp[0])
                else:
                    domainDict[subdomain]+=int(temp[0])

                
        finalList=[]
        for key in domainDict:
            temp=str(domainDict[key])
            temp+=" "+key
            finalList.append(temp)
        
        return finalList