// 437. Path Sum III C++


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
    int ans = 0;
public:
    int pathSum(TreeNode* root, int targetSum) {
        if (root) {
            paths(root, targetSum);
            pathSum(root->left, targetSum);
            pathSum(root->right, targetSum);
        }
        return ans;
    }
    void paths(TreeNode* root, long int target) {
        if (!root) return;
        if (root->val == target) ans++;
        paths(root->left, target - root->val);
        paths(root->right, target - root->val);
    }
};
