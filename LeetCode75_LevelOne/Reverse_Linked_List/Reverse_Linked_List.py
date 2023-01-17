# 206. Reverse Linked List Python

# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution(object):
    def reverseList(self, head, prev=None):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        tmp = ListNode()
        nxt = None
        tmp.next = nxt
        while head:
            store = ListNode(head.val)
            tmp.next = store
            store.next = nxt
            nxt = tmp.next
            head = head.next
        return tmp.next
