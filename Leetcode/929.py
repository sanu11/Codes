class Solution(object):
    def numUniqueEmails(self, emails):
        """
        :type emails: List[str]
        :rtype: int
        """
        finalList = set()
        for email in emails:
            arr= email.split('@')
            local = arr[0]
            local = local.split('+')[0]
            finalLocal = local.replace('.','')
            print finalLocal
            finalList.add(finalLocal+"@"+arr[1])
        print finalList
        return len(finalList)
            