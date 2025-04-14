// Problem:Given the head of a linked list, rotate the list to the right by k places.

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
      ListNode* rotateRight(ListNode* head, int k) {
          if(!head || !head->next){
              return head;
          }
          int n=0;
          ListNode* temp=head;
          while(temp){
              n++;
              temp=temp->next;
          }
          free(temp);
          int rot=k%n;
          for(int i=0;i<rot;i++){
              ListNode* last=head;
              ListNode* prev=NULL;
              while(last->next){
                  prev=last;
                  last=last->next;
              }
              last->next=head;
              prev->next=NULL;
              head=last;
          }
          return head;
      }
  };

// TC:O(k*n)
// SC:O(1)