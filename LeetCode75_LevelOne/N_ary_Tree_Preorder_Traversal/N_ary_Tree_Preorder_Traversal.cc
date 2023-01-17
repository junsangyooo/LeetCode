// 589. N-ary Tree Preorder Traversal C++
#include <vector>

// Definition for a Node.
class Node {
public:
    int val;
    std::vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, std::vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    std::vector<int> list;
    void traverse(Node* root) {
        if (root == nullptr) return;
        list.emplace_back(root->val);
        for (auto x: root->children) {
            traverse(x);
        }
    }

    std::vector<int> preorder(Node* root) {
        traverse(root);
        return list;
    }
};
