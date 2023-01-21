# 19. Remove Nth Node From End of List Python

# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        count = 1
        test =  head
        output = pre = ListNode(0, head)
        while test:
            if test.next is None:
                break
            test = test.next
            if count < n:
                count += 1
            else:
                pre = pre.next
        pre.next = pre.next.next if pre.next is not None else None
        return output.next
