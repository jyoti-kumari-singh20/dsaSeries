// Problem:Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// Code:
class Solution {
  public:
      int searchInsert(vector<int>& nums, int target) {
          int low=0;
          int high=nums.size();
          int ans=high;
          int mid;
          while(low<high){
              mid=(low+high)/2;
              if(nums[mid]>=target){
                  ans=mid;
                  high=mid;
              }
              else{
                  low=mid+1;
              }
          }
          return ans;
      }
  };

// TC:O(n)
// SC:O(1)