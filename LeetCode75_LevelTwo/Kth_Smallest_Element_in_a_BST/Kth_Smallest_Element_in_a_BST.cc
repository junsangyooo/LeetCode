// 230. Kth Smallest Element in a BST C++
#include <vector>

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
    std::vector<int> v;
public:
    int kthSmallest(TreeNode* root, int k) {
        std::vector<int> v;
        helper(root, k, v);
        return v[k-1];
    }
    void helper(TreeNode* root, int k, std::vector<int> &v) {
        if (root->left) helper(root->left, k, v);
        v.emplace_back(root->val);
        if (v.size() >= k) return;
        if(root->right) helper(root->right, k, v);
    }
};
