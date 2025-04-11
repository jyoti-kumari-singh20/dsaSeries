// Problem:Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

// Code:
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
  public:
      ListNode* removeElements(ListNode* head, int val) {
          ListNode* temp = new ListNode(0);
          temp->next = head;
          ListNode* current = temp;
  
          while (current->next != nullptr) {
              if (current->next->val == val) {
                  ListNode* nodeToDelete = current->next;
                  current->next = current->next->next;
                  delete nodeToDelete; 
              } else {
                  current = current->next;
              }
          }
  
          ListNode* newHead = temp->next;
          delete temp;
          return newHead;
      }
  };

// TC:O(n)
// SC:O(1)