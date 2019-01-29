class Solution(object):
    def subdomainVisits(self, cpdomains):
        """
        :type cpdomains: List[str]
        :rtype: List[str]
        """
        countDomains = {}
        for domain in cpdomains:
            domain = domain.split()
            count = int(domain[0])
            address = domain[1].split('.')
            # countDomains[domain[1]]=count
            n = len(address)
            for i in range(0,n):
                
                add = '.'.join(address[i:n])
                # print add
                countDomains[add] = countDomains.get(add,0) + count
                # print countDomains[add]
        # print countDomains
        li = []
        for key in countDomains:
            
            temp=''.join(key)
            # print type(key)
            temp = str(countDomains[key]) + ' ' + temp
            li.append(temp)
        return li
        