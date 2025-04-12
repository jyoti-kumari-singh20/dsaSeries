// Problem:Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.
// k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.
// You may not alter the values in the list's nodes, only nodes themselves may be changed.

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
      ListNode* reverseKGroup(ListNode* head, int k) {
          if (!head || k == 1) 
              return head;
          ListNode temp(0);
          temp.next = head;
          ListNode* prev = &temp;
  
          while (true) {
  
              ListNode* kthNode = prev;
              for (int i = 0; i < k && kthNode; ++i) {
                  kthNode = kthNode->next;
              }
              if (!kthNode) break;
  
              ListNode* start = prev->next;
              ListNode* curr = start->next;
              for (int i = 1; i < k; ++i) {
                  start->next = curr->next;
                  curr->next = prev->next;
                  prev->next = curr;
                  curr = start->next;
              }
  
              prev = start;
          }
  
          return temp.next;
      }
  };

// TC:O(n)
// SC:O(1)