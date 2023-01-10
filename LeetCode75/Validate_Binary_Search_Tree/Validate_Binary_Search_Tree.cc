// 98. Validate Binary Search Tree C++
// Definition for a binary tree node.
#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    std::vector<int> output;
    bool isValidBST(TreeNode* root) {
        if (!root) return true;
        nextNode(root);
        int pre = output[0];
        for (int i = 1; i < output.size(); i++) {
            if (output.at(i) <= pre) return false;
            pre = output.at(i);
        }
        return true;
    }
    void nextNode(TreeNode* root) {
        if (!root) return;
        nextNode(root->left);
        output.emplace_back(root->val);
        nextNode(root->right);
    }
};
