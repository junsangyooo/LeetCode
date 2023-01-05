# 876. Middle of the Linked List Python
# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution(object):
    def middleNode(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        ans = head
        count = 1
        while head:
            if count == 2:
                ans = ans.next
                count = 0
            count += 1
            head = head.next
        return ans
        