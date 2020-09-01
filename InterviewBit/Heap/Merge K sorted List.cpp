/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct compare {                                                // we wrote this user-defined compare function because we had to  
    bool operator()(                                            // make min-heap and we had to compare linkedlist values which 
        struct ListNode* a, struct ListNode* b)                 // priority-queue STL can not do on its own.
    { 
        return a->val > b->val; 
    } 
}; 
 
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    int k = A.size();
    struct ListNode *head=NULL, *last;
    
    priority_queue<ListNode*, vector<ListNode*>, compare> pq;   // Initialising Priority Queue (min-heap)
    
    for (int i = 0; i < k; i++) 
        if (A[i] != NULL) 
            pq.push(A[i]);                          // Pushing starting values of each linkedlist in pq
            
    while (!pq.empty()) { 
        struct ListNode* top = pq.top();            // Storing top value which would me minimum everytime.
        pq.pop();                                   // Removing that top value after storing

        if (top->next != NULL) 
            pq.push(top->next);                     // After poping, we'll push the next node of previous popped node
                                                    // and it will automatically get adjust in pq according to its value. 
        if (head == NULL) { 
            head = top;                             // This will run only first time and it will put the first popped
            last = top;                             // element into the Head's value.
        } 
  
        else { 
            last->next = top;                       // And now this will keep producing linkedlist in sorted manner.
            last = top; 
        } 
    } 
    return head; 
}
