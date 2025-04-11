// Problem:You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

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
      ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
          ListNode* temp = new ListNode(0);
          ListNode* current = temp;
          int carry = 0;
          while (l1 != nullptr || l2 != nullptr || carry != 0) {
              int val1 = (l1 != nullptr) ? l1->val : 0;
              int val2 = (l2 != nullptr) ? l2->val : 0;
              int sum = val1 + val2 + carry;
              carry = sum / 10;
              current->next = new ListNode(sum % 10);
              current = current->next;
  
              if (l1 != nullptr) 
                  l1 = l1->next;
              if (l2 != nullptr) 
                  l2 = l2->next;
          }
          return temp->next;
      }
  };

// TC:O(max(m,n))
// SC:O(max(m,n))