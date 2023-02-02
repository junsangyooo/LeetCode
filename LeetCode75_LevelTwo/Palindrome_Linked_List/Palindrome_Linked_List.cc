// 234. Palindrome Linked List C++

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
    ListNode* findMid(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast->next != nullptr && fast->next->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* temp = nullptr;
        while (curr != nullptr) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    bool compareList(ListNode* one, ListNode* two) {
        while (one != nullptr && two != nullptr) {
            if (one->val != two->val) return false;
            one = one->next;
            two = two->next;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return true;
        ListNode* original = head;
        ListNode* mid = findMid(head);
        ListNode* reverse = reverseList(mid);
        return compareList(original, reverse);
    }
};
