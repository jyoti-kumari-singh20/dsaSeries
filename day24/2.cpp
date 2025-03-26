// Problem:You are given a string s. We want to partition the string into as many parts as possible so that each letter appears in at most one part. For example, the string "ababcc" can be partitioned into ["abab", "cc"], but partitions such as ["aba", "bcc"] or ["ab", "ab", "cc"] are invalid.
// Note that the partition is done so that after concatenating all the parts in order, the resultant string should be s.
// Return a list of integers representing the size of these parts.

// Code:
class Solution {
  public:
      vector<int> partitionLabels(string s) {
  
          vector<int> lastIndex(26, 0);
          int n = s.size();
  
          for (int i = 0; i < n; ++i) {
              lastIndex[s[i] - 'a'] = i;
          }
  
          vector<int> result;
          int start = 0, end = 0;
  
          for (int i = 0; i < n; ++i) {
              end = max(end, lastIndex[s[i] - 'a']);
              if (i == end) {
                  result.push_back(end - start + 1);
                  start = i + 1;
              }
          }
  
          return result;
      }
  };

// TC:O(n)
// SC:O(n)