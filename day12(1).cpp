// Problem:Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

// Approach:Binary Search

// Code:
class Solution {
  public:
      int search(vector<int>& nums, int target) {
          int low=0;
          int high=nums.size()-1;
          int mid;
          while(low<=high){
              mid=(low+high)/2;
              if(nums[mid]==target){
                  return mid;
              }
              else if(nums[mid]<target){
                  low=mid+1;
              }
              else{
                  high=mid-1;
              }
          }
          return -1;
      }
  };

// TC:O(log n)
// SC:O(1)