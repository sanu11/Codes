class Solution(object):
    def equationsPossible(self, equations):
        """
        :type equations: List[str]
        :rtype: bool
        """
        l=[]
        dic = {}
        count = 0 
        li2=[]
        for st in equations:
            st=list(st)
            if st[1] == '=' and st[2] == '=':
                if dic.get(st[0],-1) == -1 and dic.get(st[3],-1) == -1:
                    dic[st[0]] = count
                    dic[st[3]] = count
                elif dic.get(st[0],-1) != -1 and dic.get(st[3],-1) == -1:
                    dic[st[3]] =  dic.get(st[0])
                elif dic.get(st[0],-1) == -1 and dic.get(st[3],-1) != -1:
                    dic[st[0]] =  dic.get(st[3])
                else:
                    x = dic[st[0]]
                    y = dic[st[3]]
                    for z in dic:
                        if(dic[z] == x):
                            dic[z] = y
        
                            
                
            else:
                li2.append(st)
            count+=1
            # print dic
            
        for st in li2:            
            if dic.get(st[0],-1)!= -1:
                c = dic.get(st[0])
                d = dic.get(st[3],-1)
                if(c==d):
                    return False
            if dic.get(st[1],-1)!= -1:
                c = dic.get(st[3])
                d = dic.get(st[0],-1)
                if(c==d):
                    return False
            if(st[0] == st[3]):
                return False

        return True
                    