// Problem:Given a doubly-linked list, a position p, and an integer x. The task is to add a new node with value x at the position just after pth node in the doubly linked list and return the head of the updated list.

// Code:
/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        // code here
        Node* newNode = new Node(data);
        if (!head) {
            return newNode;
        }

        Node* current = head;
        int count = 0;

        while (current && count < pos) {
            current = current->next;
            count++;
        }

        if (!current) {
            return head;
        }
    
        newNode->next = current->next;
        newNode->prev = current;

        if (current->next) {
            current->next->prev = newNode;
        }

        current->next = newNode;

        return head;
    }
};

// TC:O(p)
// SC:O(1)