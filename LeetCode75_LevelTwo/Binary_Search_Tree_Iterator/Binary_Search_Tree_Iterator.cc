// 173. Binary Search Tree Iterator C++
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

class BSTIterator {
    std::vector<int> v;
    int index;
public:
    BSTIterator(TreeNode* root) {
        helper(root);
        index = -1;
    }
    void helper(TreeNode* root) {
        if (!root) return;
        if (root->left) helper(root->left);
        v.emplace_back(root->val);
        if (root->right) helper(root->right);
    }
    
    int next() {
        return v[++index];
    }
    
    bool hasNext() {
        return index + 1 < v.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */