// Problem:Given a Doubly Linked list and a position. The task is to delete a node from a given position (position starts from 1) in a doubly linked list and return the head of the doubly Linked list.

// Code:
class Solution {
  public:
      Node* deleteNode(Node* head, int x) {
          if (head == NULL) 
              return head;  
          
          Node* temp = head;
          
          if (x == 1) {
              head = head->next;
              if (head != NULL)
                  head->prev = NULL;
              delete temp;
              return head;
          }
          
          for (int k = 1; temp != NULL && k < x; k++) {
              temp = temp->next;
          }
          
          if (temp == NULL) 
              return head;
          
          if (temp->prev != NULL) {
              temp->prev->next = temp->next;
          }
          if (temp->next != NULL) {
              temp->next->prev = temp->prev;
          }
          
          delete temp;
          return head;
      }
  };

// TC:O(n)
// SC:O(1)