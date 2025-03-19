// Problem:Given two strings s and t, determine if they are isomorphic.
// Two strings s and t are isomorphic if the characters in s can be replaced to get t.
// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

// Code:
class Solution {
  public:
      bool isIsomorphic(string s, string t) {
          if (s.size() != t.size()){
              return false;
          } 
          
          unordered_map<char, char> s_to_t, t_to_s;
          
          for (int i = 0; i < s.size(); i++) {
              char c1 = s[i], c2 = t[i];
              if (s_to_t.count(c1) && s_to_t[c1] != c2){
                  return false;
              } 
              if (t_to_s.count(c2) && t_to_s[c2] != c1){
                  return false;
              } 
              s_to_t[c1] = c2;
              t_to_s[c2] = c1;
          }
          return true;
      }
  };
  
// TC:O(n)
// SC:O(1)