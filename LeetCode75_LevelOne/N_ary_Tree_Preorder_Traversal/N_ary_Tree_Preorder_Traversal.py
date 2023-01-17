# 589. N-ary Tree Preorder Traversal Python
"""
# Definition for a Node.
class Node(object):
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution(object):
    def preorder(self, root):
        """
        :type root: Node
        :rtype: List[int]
        """
        lst = []
        self.traverse(root, lst)
        return lst
    
    def traverse(self, root, lst):
        if root == None: return

        lst.append(root.val)
        for child in root.children:
            self.traverse(child, lst)
