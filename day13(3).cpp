// Problem:There is an integer array nums sorted in ascending order (with distinct values).
// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// Code:
class Solution {
  public:
      int search(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=-1;
        int l=0;
        int h=n-1;
        int mid;
        while(l<=h){
          mid=(l+h)/2;
          if(nums[mid]==target){
            ans=mid;
          }
          if(nums[l]<=nums[mid]){
                  if(nums[l]<=target && target<=nums[mid]){
                      h = mid-1;
                  }
                  else{
                      l = mid+1;
                  } 
              }
              else{
                  if(nums[mid]<=target && target<=nums[h]){
                      l = mid+1;
                  }
                  else {
                      h = mid-1;
                  }
              }
          }
          return ans;
      }
  };

// TC:O(log n)
// SC:O(1)