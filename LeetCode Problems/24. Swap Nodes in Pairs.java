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
    public ListNode swapPairs(ListNode head) {
        ListNode list = head;
        int length=0;
        while(list != null){
            list = list.next;
            length++;
        }
        list = head;
        int z=1;
        if(length < 1)
            return head;
        else{
            while(z <= length/2){
                int temp = list.val;
                list.val = list.next.val;
                list.next.val = temp;
                list = list.next.next;
                z++;
            }
            return head;
        }  
    }
}
