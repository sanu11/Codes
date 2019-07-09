class Solution(object):
    def distributeCandies(self, candies, num_people):
        """
        :type candies: int
        :type num_people: int
        :rtype: List[int]
        """
        n = num_people
        x = n*(n+1)/2
        y=0
        count=0
        temp = candies
        end=n
        ans=[]
        while(temp>=0):
            print temp,x
            if(temp>=x):
                count+=1
                temp-=x
                x+=n*n
                y+=n
            else:
                print count,temp,y,x
                y+=1
                for i in range(1,n+1):
                    if(temp>=y):
                        temp-=y
                        end=i
                    else:
                        break
                
                print temp,end
                break
        print count,temp
        flag=0
        end+=1
        for i in range(1,n+1):
            if(i<end):
                ans.append(temp+(count+1)*i+count*n)
                flag=1
            else:
                ans.append((count)*i+(count-1)*n)
        
        return ans
                
            