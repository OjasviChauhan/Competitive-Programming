import java.util.*;

class LinkedList{
    static Node head;
    static class Node 
    {
        int data;
        Node next;
        Node(int d){this.data = d; this.next = null;}
    }
    
    static LinkedList removeNthFromEnd(LinkedList list, int n) {
        Node temp = list.head;   // pointer to head
        int len=0;
        while(temp != null){
            temp = temp.next;
            len++;
        }
        int length = len - n;
        temp = list.head;
        while(length > 1){
            length--;
            temp = temp.next;
        }
        temp.next = temp.next.next;
        return list;
    }
    
    static void printList() { 
        Node tnode = head; 
        while (tnode != null) { 
            System.out.print(tnode.data+" "); 
            tnode = tnode.next; 
        } 
    } 
    
    public static void main(String args[]){
        LinkedList list = new LinkedList();
        list.head = new Node(1);
        Node second = new Node(2);
        Node third = new Node(3);
        Node fourth = new Node(4);
        Node fifth = new Node(5);
        list.head.next = second;
        second.next = third;
        third.next = fourth;
        fourth.next = fifth;

        //printList();
        //System.out.println("\n");
        list = removeNthFromEnd(list,2);
        printList();
    }
}
