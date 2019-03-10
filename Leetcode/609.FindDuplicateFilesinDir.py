class Solution(object):
    def findDuplicate(self, paths):
        """
        :type paths: List[str]
        :rtype: List[List[str]]
        """
        hashMap={}
        res=[]
        for path in paths:
            temp = path.split(" ")
            parent = temp[0]
            files = temp[1:]
            for f in files:
                file_name,file_content = f.split('(')
                file_content = file_content[:-1]
                # print file_name,file_content
                # print hashMap
                # print hashMap.get(file_content,-1)
                if(hashMap.get(file_content,-1)==-1):
                    tempPath = parent+'/'+file_name
                    hashMap[file_content] = [tempPath]
                    # print hashMap
                else:
                    hashMap[file_content].append(''+parent+'/'+file_name)
                # print hashMap
        for key in hashMap:
            if len(hashMap[key])>1:
                res.append(hashMap[key])
        return res