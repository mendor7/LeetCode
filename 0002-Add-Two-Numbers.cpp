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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * sums = NULL;
        ListNode * next = NULL;
        ListNode * temp = NULL;
        int sum;
        int overflow = 0;
        bool l1end = false;
        bool l2end = false;
        while (!l1end) {
            while (!l2end) {
                sum = l1->val + l2->val;
                sum = sum + overflow;
                overflow = 0;
                while (sum > 9) {
                    sum = sum - 10;
                    overflow++;
                }
                temp = new ListNode(sum);
                if (sums == NULL) {
                    sums = temp;
                    next = temp;
                }
                else {
                    next->next = temp;
                    next = next->next;
                }
                if (l2->next == NULL) {
                    l2end = true;
                }
                if (!l2end) {
                    l2 = l2->next;
                }
                break;
            }
            if (l1->next == NULL) {
                    l1end = true;
                }
                if (!l1end) {
                    l1 = l1->next;
                }
            if (l2end && !l1end) {
                sum = l1->val;
                sum = sum + overflow;
                overflow = 0;
                while (sum > 9) {
                    sum = sum - 10;
                    overflow++;
                }
                temp = new ListNode(sum);
                if (sums == NULL) {
                    sums = temp;
                    next = temp;
                }
                else {
                    next->next = temp;
                    next = next->next;
                }
            }
        }
        while (!l2end) {
                sum = l2->val;
                sum = sum + overflow;
                overflow = 0;
                while (sum > 9) {
                    sum = sum - 10;
                    overflow++;
                }
                temp = new ListNode(sum);
                if (sums == NULL) {
                    sums = temp;
                    next = temp;
                }
                else {
                    next->next = temp;
                    next = next->next;
                }
                if (l2->next == NULL) {
                    l2end = true;
                }
                if (!l2end) {
                    l2 = l2->next;
                }
            }
        if (overflow != 0) {
            temp = new ListNode(overflow);
            next->next = temp;
        }
        return sums;
    }
};