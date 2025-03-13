// Problem:Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
// If target is not found in the array, return [-1, -1].

// Code:
class Solution {
  public:
      vector<int> searchRange(vector<int>& nums, int target) {
          int low = 0;
          int high = nums.size() - 1;
          vector<int> ans = {-1, -1};
          int left = -1;
          while (low <= high) {
              int mid = low + (high - low) / 2;
              if (nums[mid] < target) {
                  low = mid + 1;
              } else if (nums[mid] > target) {
                  high = mid - 1;
              } else {
                  left = mid;
                  high = mid - 1; 
              }
          }
          if (left == -1) return ans; 
          low = 0;
          high = nums.size() - 1;
          int right = -1;
          while (low <= high) {
              int mid = low + (high - low) / 2;
              if (nums[mid] < target) {
                  low = mid + 1;
              } else if (nums[mid] > target) {
                  high = mid - 1;
              } else {
                  right = mid;
                  low = mid + 1; 
              }
          }
          ans[0] = left;
          ans[1] = right;
          return ans;
      }
  };

// TC:O(n)
// SC:O(1)