// 19. Remove Nth Node From End of List C++

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* output = new ListNode(0, head);
        ListNode* pre = output;
        while (head) {
            if (n > 0) {
                n--;
            } else {
                pre = pre->next;
            }
            head = head->next;
        }
        if (pre->next) pre->next = pre->next->next;
        pre = output->next;
        delete output;
        return pre;
    }
};
