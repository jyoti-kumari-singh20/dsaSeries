// Problem Name: Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).
// Specifically, ans is the concatenation of two nums arrays.
// Return the array ans.
 
// Problem Link: https://leetcode.com/problems/concatenation-of-array/description/

// Code:
#include <bits/stdc++.h>

using namespace std;

class Solution{
  public:
      vector<int> getConcatenation(vector<int>& nums) {
          vector<int> ans;
          int n=nums.size();
          for(int i=0; i<n ; i++){
              ans.push_back(nums[i]);
          }
          for(int i=0; i<n ; i++){
              ans.push_back(nums[i]);
          }
          return ans;
      }
  };

  // Time Complexity: O(n) 
  // space complexity: O(n)

  