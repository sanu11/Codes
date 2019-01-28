# import queue
class RecentCounter(object):

    def __init__(self):
        self.list2=collections.deque()
        
    def ping(self, t):
        """
        :type t: int
        :rtype: int
        """
        self.list2.append(t)
       
        while t-self.list2[0]>3000:
            self.list2.popleft()
            # print self.list2
        return len(self.list2)


# Your RecentCounter object will be instantiated and called as such:
# obj = RecentCounter()
# param_1 = obj.ping(t)