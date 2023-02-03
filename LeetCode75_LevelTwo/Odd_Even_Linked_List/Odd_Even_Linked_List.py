# 328. Odd Even Linked List Python

# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def oddEvenList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if not head or not head.next: return head

        odd = head
        even = head.next
        firstEven = head.next

        while odd.next and even.next :
            odd.next = even.next
            even.next = odd.next.next
            odd = odd.next
            even = even.next
        odd.next = firstEven
        return head
