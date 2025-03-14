// Problem:Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:
// [4,5,6,7,0,1,2] if it was rotated 4 times.
// [0,1,2,4,5,6,7] if it was rotated 7 times.
// Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].
// Given the sorted rotated array nums of unique elements, return the minimum element of this array.

// Code:
class Solution {
  public:
      int findMin(vector<int>& nums) {
          int n=nums.size();
          int l=0;
        int h=n-1;
        int mid;
          int ans=INT_MAX;
        while(l<=h){
          mid=(l+h)/2;
          if(nums[l]<=nums[h]){
            ans=min(nums[l],ans);
          }
          if(nums[l]<=nums[mid]){
                      ans=min(nums[l],ans);
                      l = mid+1;
                  } 
              else{
                      ans=min(nums[mid],ans);
                      h = mid-1;
                  }
              }
          return ans;
      }
  };

// TC:O(log n)
// SC:O(1)