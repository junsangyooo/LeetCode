# 101. Symmetric Tree Python
# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution(object):
    def isSymmetric(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if not root: return True
        return self.checkNodes(root.left, root.right)
    def checkNodes(self, left, right):
        if not left and not right: return True
        if not left: return False
        if not right: return False
        if left.val != right.val: return False
        return self.checkNodes(left.left, right.right) and self.checkNodes(left.right, right.left)
