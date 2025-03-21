// Problem:Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// Code:
class Solution {
  public:
      bool isAnagram(string s, string t) {
          map<char,int> count;
          for (auto x : s) {
              count[x]++;
          }
          for (auto x : t) {
              count[x]--;
          }
          for (auto x : count) {
              if (x.second != 0) {
                  return false;
              }
          }
  
          return true;
      }
  };

// TC:O(n)
// SC:O(1)