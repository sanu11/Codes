# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def reverseBetween(self, head, m, n):
        """
        :type head: ListNode
        :type m: int
        :type n: int
        :rtype: ListNode
        """
        first = head
        i=1
        while i < m-1 and first.next:
            first = first.next
            i+=1
        print first.val
        
        prev = None
        curr = None
        if(m==1):
            first=None
            curr = head.next
            prev = head
        elif(first):
            prev = first.next
            if(prev):
                curr = prev.next
                
        np = None
        if(m!=1):
            i+=1
        last = prev
        # print curr.val,prev.val,np.val
        while i < n and curr!=None:
            np = curr.next
            curr.next = prev
            prev = curr
            curr = np
            # print curr.val
            i+=1
        # print prev.val,curr.val
        if(m!=1):
            first.next = prev
        else:
            head = prev
        last.next = curr
        return head
            
            
           