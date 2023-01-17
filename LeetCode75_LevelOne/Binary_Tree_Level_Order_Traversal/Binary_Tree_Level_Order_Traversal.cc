// 102. Binary Tree Level Order Traversal C++
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
public:
    std::vector<std::vector<int>> levelOrder(TreeNode* root) {
        std::vector<std::vector<int>> v;
        if (!root) return v;

        std::vector<TreeNode*> level;
        level.emplace_back(root);

        std::vector<int> innerV;
        while (!level.empty()) {
            innerV.clear();
            std::vector<TreeNode*> tmp;
            for (auto x: level) {
                innerV.emplace_back(x->val);
                tmp.emplace_back(x->left);
                tmp.emplace_back(x->right);
            }
            v.emplace_back(innerV);
            level.clear();
            for (auto x:tmp) {
                if (x) {
                    level.emplace_back(x);
                }
            }
        }
        return v;
    }
};
