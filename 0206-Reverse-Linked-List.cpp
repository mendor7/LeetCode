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
        if (head == NULL) {
            return head;
        }
        int count = 0;
        vector<int> nums;
        ListNode* reversed = new ListNode();
        ListNode* traverse = new ListNode();
        traverse = reversed;
        while (head != NULL) {
            nums.push_back(head->val);
            count++;
            head = head->next;
        }
        while (count > 0) {
            ListNode* next = new ListNode();
            traverse->val = nums[count - 1];
            count--;
            if (count == 0) {
                break;
            }
            traverse->next = next;
            traverse = traverse->next;
        }
        return reversed;
    }
};