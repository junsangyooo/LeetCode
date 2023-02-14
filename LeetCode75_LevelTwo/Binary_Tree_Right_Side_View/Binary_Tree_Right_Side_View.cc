// 199. Binary Tree Right Side View C++
#include <vector>
#include <queue>

//  Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    std::vector<int> output;
public:
    std::vector<int> rightSideView(TreeNode* root) {
        if (!root) return output;
        std::queue<TreeNode*> dq;
        dq.push(root);
        while (!dq.empty()) {
            int n = dq.size();
            for (int i = 0; i < n; i++) {
                TreeNode* node = dq.front();
                dq.pop();
                if (i == n - 1){
                    output.emplace_back(node->val);
                }
                if (node->left) dq.push(node->left);
                if (node->right) dq.push(node->right);
            }
        }
        return output;
    }
};
