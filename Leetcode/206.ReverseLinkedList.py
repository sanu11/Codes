# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
#         Iterative
#         curr = head
#         prev = None
#         np = None
#         while(curr!=None):
#             np = curr.next
#             curr.next = prev
#             prev = curr
#             curr = np
            
#         head = prev
        return self.recur(head)
        # return head
#     Recursive


    def recur(self,head):
        if(head==None or head.next == None):
            return head
        p = self.recur(head.next)
        head.next.next = head
        head.next = None
        return p


        