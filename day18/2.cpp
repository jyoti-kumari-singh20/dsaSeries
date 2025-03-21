// Problem:Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".

// Code:
class Solution {
  public:
      string longestCommonPrefix(vector<string>& strs) {
          int n=strs.size();
          string ans="";
          sort(strs.begin(),strs.end());
          string first=strs[0];
          string last=strs[n-1];
          for(int i=0;i<min(first.size(),last.size());i++){
              if(first[i]!=last[i]){
                  return ans;
              }
              ans+=first[i];
          }
          return ans;
      }
  };

// TC:O(n)
// SC:O(1)