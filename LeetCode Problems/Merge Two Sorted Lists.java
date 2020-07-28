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
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode dummy = new ListNode();
        ListNode temp = dummy,p = l1,q = l2;
        while(p != null || q != null){
            int x = (p!=null) ? p.val : Integer.MAX_VALUE;
            int y = (q!=null) ? q.val : Integer.MAX_VALUE;
            if(x <= y){
                temp.next = new ListNode(x);
                temp = temp.next;
                p = (p != null) ? p.next : null;
            }
            else{
                temp.next = new ListNode(y);
                temp = temp.next;
                q = (q != null) ? q.next : null;
            }
        }
        if(p != null){
            while(p != null){
                temp.val = p.val;
                temp = temp.next;
                p = p.next;
            }
        }
        if(q != null){
            while(q != null){
                temp.val = q.val;
                temp = temp.next;
                q = q.next;
            }
        }
        return dummy.next;
    }
}
