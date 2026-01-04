// Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

// Approach
// Sliding Window concept
// Increase the window size by right till we get the sum >= target
// After that decrease the window size from left until sum >=target.
// Update the min_size of window as shrink/grow.
// Repeat this till end of array.

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;
        int sum=0;
        int ans=INT_MAX;
        while(r<n){
            sum+=nums[r];
            while(sum>=target){
                ans=min(ans,r-l+1);
                sum-=nums[l];
                l++;
            }
            r++;
        }
        return ans==INT_MAX?0:ans; 
    }
};