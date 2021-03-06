/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct compare { 
    bool operator()( 
        struct ListNode* a, struct ListNode* b) 
    { 
        return a->val > b->val; 
    } 
}; 

ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int k = A.size();
    struct Node *head = NULL, *last; 
  
    // priority_queue 'pq' implemented 
    // as min heap with the 
    // help of 'compare' function 
    priority_queue<ListNode*, vector<ListNode*>, compare> pq; 
  
    // push the head nodes of all 
    // the k lists in 'pq' 
    for (int i = 0; i < k; i++) 
        if (A[i] != NULL) 
            pq.push(A[i]); 

    while (!pq.empty()) { 
  
        // get the top element of 'pq' 
        struct ListNode* top = pq.top(); 
        pq.pop(); 
  
        // check if there is a node 
        // next to the 'top' node 
        // in the list of which 'top' 
        // node is a member 
        if (top->next != NULL) 
            // push the next node in 'pq' 
            pq.push(top->next); 
  
        // if final merged list is empty 
        if (head == NULL) { 
            head = top; 
  
            // points to the last node so far of 
            // the final merged list 
            last = top; 
        } 
  
        else { 
            // insert 'top' at the end 
            // of the merged list so far 
            last->next = top; 
  
            // update the 'last' pointer 
            last = top; 
        } 
    } 
  
    // head node of the required merged list 
}
