// Problem:Given the head of a Singly Linked List and a value x, insert that value x at the end of the LinkedList and return the modified Linked List.

// Code:
/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node* new_node = new Node(x);
        if (head == nullptr) {
            return new_node;
        }

        Node* last = head;

        while (last->next != nullptr) {
            last = last->next;
        }


        last->next = new_node;

        return head;
        }
};

// TC:O(n)
// SC:O(1)