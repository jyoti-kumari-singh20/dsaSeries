// Problem:The beauty of a string is the difference in frequencies between the most frequent and least frequent characters.
// For example, the beauty of "abaacc" is 3 - 1 = 2.
// Given a string s, return the sum of beauty of all of its substrings.

// Code:
class Solution {
  public:
      int beautySum(string s) {
          int countBeauty = 0;
          unordered_map<char,int>mpp;
          for(int i=0;i<s.length();i++){
              mpp.clear();
              for(int j=i;j<s.length();j++){
                  char ch = s[j];
                  mpp[ch]++;
                  int maxi = INT_MIN;
                  int mini = INT_MAX;
                  for(auto each:mpp){
                      maxi = max(maxi,each.second);
                      mini = min(mini,each.second);
                  }
                  countBeauty += maxi-mini;
              }
          }
          return countBeauty;
      }
  };

// TC:O(n^2)
// SC:O(1)