// Problem:You are given a string s. You can convert s to a palindrome by adding characters in front of it.
// Return the shortest palindrome you can find by performing this transformation.

// Code:
class Solution {
  public:
      string shortestPalindrome(string s) {
          string rev = s;
          reverse(rev.begin(), rev.end());
          string combined = s + "#" + rev;
  
          int n = combined.size();
          vector<int> lps(n, 0);
          for (int i = 1; i < n; ++i) {
              int len = lps[i - 1];
              while (len > 0 && combined[i] != combined[len]) {
                  len = lps[len - 1];
              }
              if (combined[i] == combined[len]) {
                  ++len;
              }
              lps[i] = len;
          }
  
          int longestPalPrefix = lps[n - 1];
  
          string prefixToAdd = s.substr(longestPalPrefix);
          reverse(prefixToAdd.begin(), prefixToAdd.end());
  
          return prefixToAdd + s;
      }
  };

// TC:O(n)
// SC:O(n)