// 235. Lowest Common Ancestor of a Binary Search Tree C++

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // if (p->val < root->val && q->val < root->val) {
        //     return lowestCommonAncestor(root->left, p, q);
        // } else if (p->val > root->val && q->val > root->val) {
        //     return lowestCommonAncestor(root->right, p , q);
        // } else {
        //     return root;
        // }
        while (true) {
            if (p->val < root->val && q->val < root->val) {
                root = root->left;
            } else if (p->val > root->val && q->val > root->val) {
                root = root->right;
            } else {
                return root;
            }
        }
    }
};
