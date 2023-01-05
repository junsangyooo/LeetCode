// 876. Middle of the Linked List C++


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
    ListNode* middleNode(ListNode* head) {
        int count = 1;
        ListNode* ans = head;
        while (head) {
            if (count == 2) {
                ans = ans->next;
                count = 0;
            }
            count += 1;
            head = head->next;
        }
        return ans;
    }
};
