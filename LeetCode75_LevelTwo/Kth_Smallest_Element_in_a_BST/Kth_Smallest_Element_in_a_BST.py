# 230. Kth Smallest Element in a BST Python
# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution(object):
    def kthSmallest(self, root, k):
        """
        :type root: TreeNode
        :type k: int
        :rtype: int
        """
        def helper(root) :
            if not root: return []
            nums = [root.val]
            if root.left:
                nums = helper(root.left) + nums
            if len(nums) >= k:
                return nums
            if root.right:
                nums += helper(root.right)
            return nums
        
        num = helper(root)
        return num[k-1]
