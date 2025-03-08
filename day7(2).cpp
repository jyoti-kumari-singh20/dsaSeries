// Problem: You are given an integer array nums and two integers l and r. Your task is to find the minimum sum of a subarray whose size is between l and r (inclusive) and whose sum is greater than 0.

// Return the minimum sum of such a subarray. If no such subarray exists, return -1.

// A subarray is a contiguous non-empty sequence of elements within an array.

 
// Code:
class Solution {
  public:
      int minimumSumSubarray(vector<int>& nums, int l, int r) {
          int n=nums.size();
          int ans=INT_MAX;
          for(int k=l;k<=r;k++){
              int minsum=INT_MAX;
              for(int i=0;i<n && i+k<=n;i++){
                  int sum=0;
                  for(int j=0;j<k ;j++){
                      int index=i+j;
                      sum=sum+nums[index];
                  }
                  if ((sum < minsum) && (sum > 0)) {
                      minsum = sum;
                  }
              }
          ans=min(ans,minsum);
          } 
          if (ans<=0 ||ans==INT_MAX)
             return -1;
          return ans;
      }
  };

// TC:O(n*2)
// SC:O(1)  