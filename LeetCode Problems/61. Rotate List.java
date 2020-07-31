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
    public ListNode rotateRight(ListNode head, int k) {
        if(head == null || k == 0)
            return head;
        ListNode temp = head;
        int length=0;
        while(temp!=null){
            temp = temp.next;
            length++;
        }
        temp = head;
        if(length == 1 || k%length==0)
            return head;
        else{
            k = k % length;
            int shift = length - k;
            while(shift-- > 1)
                temp = temp.next;
            ListNode Break = temp.next;
            temp.next = null;
            ListNode add = Break;
            while(k-- > 1)
                add = add.next;
            add.next = head;
            return Break;
        }
    }
}
