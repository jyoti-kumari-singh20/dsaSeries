// You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

// Return true if you can reach the last index, or false otherwise.

// Approach:
// // base case: dp[0]=total sum
// left:stores sum of element from 0 to index i
// right:stores sum of element from i+1 to last index 
// at index i, evaluate absolute difference of left  and rigt and check and stores minimum difference at dp[i].

// Solution:
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<bool> dp(n,false);
        dp[0]=true;
        for(int i=0;i<n;i++){
            int jump=nums[i];
            if(dp[i]==true){
                for(int j=i+1;j<=i+jump && j<n;j++){
                    dp[j]=true;
                }
            }
        }
        return dp[n-1];
    }
};

