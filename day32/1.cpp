// Problem:Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.

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
      ListNode* deleteDuplicates(ListNode* head) {
          ListNode *temp=new ListNode(0);
          temp->next=head;
          ListNode *curr=head;
          ListNode *prev=temp;
          while(curr){
              int dup=0;
              while(curr->next && curr->val==curr->next->val){
                  curr=curr->next;
                  dup=1;
              }
              if(dup){
                  prev->next=curr->next;
              }
              else{
                  prev=prev->next;
              }
              curr=curr->next;
          }
          return temp->next;
      }
  };

// TC:O(n)
// SC:O(1)