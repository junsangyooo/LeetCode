# 142. Linked List Cycle II Python

# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def detectCycle(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        tmp = head
        index = 0
        dict = {}
        while tmp:
            if tmp in dict:
                return tmp
            dict[tmp] = index
            index += 1
            tmp = tmp.next
        return None
        