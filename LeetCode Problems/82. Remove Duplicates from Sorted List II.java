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
    public ListNode deleteDuplicates(ListNode dummy) {
        ListNode list = new ListNode(-2);
        list.next = dummy;
        ListNode temp = list;
        ListNode head = list;
        int count=0;
        while(temp!=null){
            temp = temp.next;
            count++;
        }
        count -= 1;
        temp = list;
        while(temp!=null){
            if(count > 0 && temp.val == temp.next.val){ 
                int data = temp.val;
                while(count >= 0 && temp.val == data){
                    temp = temp.next;
                    count--;
                }
                while(head.next.val != data){
                    head = head.next;
                }
                head.next = temp;
            }
            else{
                temp = temp.next;
                count--;
            }
        }
        return list.next;
    }
}
