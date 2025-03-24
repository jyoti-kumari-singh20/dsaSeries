// Problem:A parentheses string is valid if and only if:
// It is the empty string,
// It can be written as AB (A concatenated with B), where A and B are valid strings, or
// It can be written as (A), where A is a valid string.
// You are given a parentheses string s. In one move, you can insert a parenthesis at any position of the string.
// For example, if s = "()))", you can insert an opening parenthesis to be "(()))" or a closing parenthesis to be "())))".
// Return the minimum number of moves required to make s valid.

// Code:
class Solution {
  public:
      int minAddToMakeValid(string s) {
          int n=s.size();
          stack<char> ans;
          int c=0;
          for(auto& it:s){
              if(it=='('){
                  ans.push(it);
              }
              else{
                  if(ans.empty()){
                      c++;
                  }
                  else{
                      ans.pop();
                  }
              }
          }
          return c+ans.size();
      }
  };
  
// TC:O(n)
// SC:O(n)