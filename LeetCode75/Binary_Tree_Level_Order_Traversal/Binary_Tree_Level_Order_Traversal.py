# 102. Binary Tree Level Order Traversal Python
# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution(object):
    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        if not root:
            return []
        
        output = []
        test = [root]
        while test:
            output.append([node.val for node in test])
            tmp = []
            for node in test:
                tmp.extend([node.left, node.right])
            test = [leaf for leaf in tmp if leaf]
        return output
        