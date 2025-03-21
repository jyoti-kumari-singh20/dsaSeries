// Problem:Given a valid parentheses string s, return the nesting depth of s. The nesting depth is the maximum number of nested parentheses.

// Code:
class Solution {
  public:
      int maxDepth(string s) {
          int ans=0;
          int count=0;
          for(int i=0;i<s.size();i++) {
              if(s[i]=='(') {
                  count++;
                  ans=max(ans,count);
              }
              else if(s[i]==')') {
                  count--;
                  
              }
              
          }
          return ans;
      }
  };
  
// TC:O(n)
// SC:O(1)