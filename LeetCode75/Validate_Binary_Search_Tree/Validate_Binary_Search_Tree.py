# 98. Validate Binary Search Tree Python
# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution(object):
    def isValidBST(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        output = []
        self.nextNode(root, output)

        for i in range(1, len(output)):
            if output[i-1] >= output[i]: return False
        return True

    def nextNode(self, root, output):
        if not root: return
        self.nextNode(root.left, output)
        output.append(root.val)
        self.nextNode(root.right, output)