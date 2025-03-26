// Problem:Given two strings a and b, return the minimum number of times you should repeat string a so that string b is a substring of it. If it is impossible for b​​​​​​ to be a substring of a after repeating it, return -1.
// Notice: string "abc" repeated 0 times is "", repeated 1 time is "abc" and repeated 2 times is "abcabc".

// Code:
class Solution {
  public:
       int repeatedStringMatch(string a, string b) {
          string repeated = a;
          int count = 1;
  
          while (repeated.size() < b.size()) {
              repeated += a;
              count++;
          }
  
          if (repeated.find(b) != string::npos) {
              return count;
          }
  
          repeated += a;
          count++;
          if (repeated.find(b) != string::npos) {
              return count;
          }
  
          return -1; 
      }
  };

// TC:O(m+n)
// SC:O(m+n)