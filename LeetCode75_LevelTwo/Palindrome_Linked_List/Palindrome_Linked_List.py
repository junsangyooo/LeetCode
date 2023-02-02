# 234. Palindrome Linked List Python

# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        output = []
        while head:
            output.append(head.val)
            head = head.next
        return output == output[::-1]
