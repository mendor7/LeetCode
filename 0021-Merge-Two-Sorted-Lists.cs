/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public ListNode MergeTwoLists(ListNode list1, ListNode list2) { 
        ListNode list3 = new ListNode();
        ListNode head = list3;

        if (list1 == null && list2 == null) {
            return list1;
        }
        else if (list1 != null && list2 == null) {
            return list1;
        }
        else if (list1 == null && list2 != null) {
            return list2;
        }

        if (list1.val <= list2.val) {
            list3.val = list1.val;
            if (list1.next != null) {
                list1 = list1.next;
            }
            else {
                list3.next = list2;
                list3 = list3.next;
                return head;
            }
        }
        else {
            list3.val = list2.val;
            if (list2.next != null) {
                list2 = list2.next;
            }
            else {
                list3.next = list1;
                list3 = list3.next;
                return head;
            }
        }

        while (list1 != null && list2 != null) {
            if (list1.val <= list2.val) {
                ListNode temp = new ListNode();
                temp.val = list1.val;
                list3.next = temp;
                list3 = list3.next;
                list1 = list1.next;
            }
            else {
                ListNode temp = new ListNode();
                temp.val = list2.val;
                list3.next = temp;
                list3 = list3.next;
                list2 = list2.next;
            }
        }

        if (list1 == null) {
            list3.next = list2;
        }
        else if (list2 == null) {
            list3.next = list1;
        }
        return head;
    }
}