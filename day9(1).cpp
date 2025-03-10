// Problem:Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// Approach: In first loop ,we will iterate through each element.Then ,in second loop,we will check if the target sum is possible or not.

// Code:
class Solution {
  public:
      vector<int> twoSum(vector<int>& nums, int target) {
          int n=nums.size();
          int t=target;
          for(int i=0; i<n ; i++){
              int x=t-nums[i];
              for(int j=i+1; j<n ; j++){
                  if(nums[j] == x){
                      return {i,j};
                      break;
                  }
              }
          }
          return {};
      }
  };

// TC:O(n^2)
// SC:O(n)

