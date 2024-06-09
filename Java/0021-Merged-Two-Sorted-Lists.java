/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode head = new ListNode();
        ListNode temp = head;
        if (list1 == null) {
            if (list2 == null) {
                return list1;
            }
            else {
                return list2;
            }
        }
        else if (list2 == null) {
            return list1;
        }
        else {
            while (list1 != null && list2 != null) {
                if (list1.val <= list2.val) {
                    temp.val = list1.val;
                    temp.next = new ListNode();
                    temp = temp.next;
                    list1 = list1.next;
                }
                else {
                    temp.val = list2.val;
                    temp.next = new ListNode();
                    temp = temp.next;
                    list2 = list2.next;
                }
            }
            while (list1 != null) {
                temp.val = list1.val;
                if (list1.next != null) {
                    temp.next = new ListNode();
                    temp = temp.next;
                }
                list1 = list1.next;
            }
            while (list2 != null) {
                temp.val = list2.val;
                if (list2.next != null) {
                    temp.next = new ListNode();
                    temp = temp.next;
                }
                list2 = list2.next;
            }
            return head;
        }
    }
}