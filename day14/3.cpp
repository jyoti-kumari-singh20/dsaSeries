// Problem : Given an array of integers nums and an integer threshold, we will choose a positive integer divisor, divide all the array by it, and sum the division's result. Find the smallest divisor such that the result mentioned above is less than or equal to threshold.
// Each result of the division is rounded to the nearest integer greater than or equal to that element. (For example: 7/3 = 3 and 10/2 = 5).

// Code :
class Solution {
  public:
      int smallestDivisor(vector<int>& nums, int threshold) {
          int n = nums.size();
          sort(nums.begin(), nums.end());
          
          int maxValue = nums[n - 1];
          int low = 1;  
          int high = maxValue;
          int ans ;
  
          while (low <= high) {
              int mid = (low + high) / 2;
              int sum = 0;
              for (int num : nums) {
                  sum += num / mid + (num % mid != 0); 
              }
  
              if (sum <= threshold) {
                  ans = mid;  
                  high = mid - 1;
              }
               else {
                  low = mid + 1;  
              }
          }
  
          return ans;
      }
  }; 

// TC :O(nlogm) 
// SC:O(n)