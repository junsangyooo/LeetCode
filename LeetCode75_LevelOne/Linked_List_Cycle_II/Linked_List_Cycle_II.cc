// 142. Linked List Cycle II C++
#include <unordered_set>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        std::unordered_set<ListNode*> st;
        while (head) {
            if (st.find(head) != st.end()) return head;
            st.insert(head);
            head = head->next;
        }
        return nullptr;
    }
};
