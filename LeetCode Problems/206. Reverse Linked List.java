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
    public ListNode reverseList(ListNode head) {
        ListNode dummy = new ListNode();
        ListNode list = dummy;
        ListNode temp = head;
        int length = 0;
        while(temp!=null){
            temp = temp.next;
            length++;
        }
        // System.out.println(length);
        temp = head;
        // System.out.println(list.val);
        while(length>0){
            for(int i=0;i<length-1;i++){
               temp = temp.next; 
            }
            // System.out.println(temp.val);
            list.next = new ListNode(temp.val);
            list = list.next;
            length--;
            temp = head;
        }
        return dummy.next;
    }
}
