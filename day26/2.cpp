Problem:Given a linked list of n nodes and a key, the task is to check if the key is present in the linked list or not.

Code:
/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, Node* head, int key) {
        // Code here
        struct Node* temp=head;
        if(head!=NULL){
            
            while(temp != NULL){
                if(temp->data == key){
                    return true;
                    break;
                }
                temp=temp->next;
            }
        }
        return false;
    }
};

// TC:O(n)
// SC:O(1)