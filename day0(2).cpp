// Problem:Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// Approach:First we sort the array,then check for duplicate elements.

// Code:
class Solution {
  public:
      bool containsDuplicate(vector<int>& nums) {
          sort(nums.begin(),nums.end());
          int n=nums.size();
          for(int i=1;i<n;i++){
                  if(nums[i]==nums[i-1]){
                      return true;
              }
          }
              return false;
      }
  };

// TC:O(n logn)
// SC:O(1)