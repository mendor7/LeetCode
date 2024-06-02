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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * newHead = new ListNode();
        if (head == NULL) {
            newHead = NULL;
            return newHead;
        }
        else {
            while (head->val == val && head->next != NULL) {
                head = head->next;
            }
            if (head->val == val) {
                newHead = NULL;
                return newHead;
            }
            newHead = head;
        }
        while (head->next != NULL) {
            while (head->next->val == val) {
                if (head->next->next != NULL) {
                    head->next = head->next->next;
                }
                else {
                    head->next = NULL;
                    return newHead;
                }
            }
            head = head->next;
        }
        return newHead;
    }
};