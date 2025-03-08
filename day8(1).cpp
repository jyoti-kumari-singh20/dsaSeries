// Problem: Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

// Code:
class Solution {
  public:
      void moveZeroes(vector<int>& nums) {
          int zero_index = 0;
          for (int i = 0; i < nums.size(); i++) {
              if (nums[i] != 0) {
                  nums[zero_index] = nums[i];
                  if (zero_index != i) {
                      nums[i] = 0;
                  }
                zero_index++;
              }
          }
      }
  };

// TC:O(n)
// SC:O(1)