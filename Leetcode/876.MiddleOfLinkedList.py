# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def middleNode(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        node1 = head
        node2= head
        while node2!=None and node2.next!= None:
            node1=node1.next
            node2 = node2.next.next
        return node1
        