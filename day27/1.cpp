// Problem:Given a doubly linked list. Your task is to reverse the doubly linked list and return its head.

// Code:
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        if(head==NULL || head->next==NULL){
            return head;
        }
        DLLNode* curr=head;
        DLLNode* pre=NULL;
        while(curr!=NULL){
            pre=curr->prev;
            curr->prev=curr->next;
            curr->next=pre;
            curr=curr->prev;
        }
        return pre->prev;
    }
};

// TC:O(n)
// SC:O(1)