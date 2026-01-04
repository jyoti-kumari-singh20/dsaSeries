// Given an integer array nums, return the sum of divisors of the integers in that array that have exactly four divisors. If there is no such integer in the array, return 0.

// Approach
// Check one by one which element has four divisor. 
// Then append the sum of divisor of that element in  variable ans.

// Solution
class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        int count = 2;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 2; j*j <= nums[i]; j++) {
                if (nums[i] % j == 0) {
                    int other=nums[i]/j;
                    if (j == other) {
                        count += 1;
                        sum += j;
                    } else {
                        count += 2;
                        sum += j + other;
                    }
                }
            }
            if (count == 4) {
                ans += sum + 1 + nums[i];
            }
            count = 2;
            sum = 0;
        }
        return ans;
    }
};