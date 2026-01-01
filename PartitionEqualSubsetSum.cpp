// Given an integer array nums, return true if you can partition the array into two subsets such that the sum of the elements in both subsets is equal or false otherwise.

// Approach
// 0/1 Knapsack problem

// Solution:
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int totalSum = 0;
        for (int x : nums) totalSum += x;

        if (totalSum % 2 != 0) return false;

        int target = totalSum / 2;

        vector<bool> dp(target + 1, false);
        dp[0] = true; 

        for (int num : nums) {
            for (int w = target; w >= num; w--) {
                dp[w] = dp[w] || dp[w - num];
            }
        }

        return dp[target];
    }
};
