/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* reversed = new ListNode();
        if (head == NULL) {
            return head;
        }
        while (head != NULL) {
            if (head->next != NULL) {
                ListNode* next = new ListNode();
                next->val = head->val;
                head = head->next;
                next->next = reversed->next;
                reversed->next = next;
            }
            else {
                reversed->val = head->val;
                return reversed;
            }
        }
        return reversed;
    }
};
