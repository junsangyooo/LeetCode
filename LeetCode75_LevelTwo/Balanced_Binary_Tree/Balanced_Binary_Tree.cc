// 110. Balanced Binary Tree C++
#include <algorithm>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
private:
    int helper(TreeNode* root, int& height) {
        if (root==nullptr) {
            height = -1;
            return true;
        }
        int left, right;
        if (helper(root->left, left) && helper(root->right, right) && std::abs(left-right) < 2) {
            height = std::max(left, right)  +1;
            return true;
        }
        return false;
    }
public:
    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        int height;
        return helper(root, height);
    }
};
