// Problem : Given a positive integer n, find the square root of n. If n is not a perfect square, then return the floor value.

// Code : 
class Solution {
  public:
      int floorSqrt(int n) {
          if (n == 0 || n == 1) {
              return n;  
          }
          
          int low = 1, high = n / 2; 
          int ans = -1;  
          
          while (low <= high) {
              int mid = (low + high) / 2;
              
              if (mid * mid == n) {
                  return mid;  
              }
              else if (mid * mid < n) {
                  ans = mid;  
                  low = mid + 1;
              }
              else {
                  high = mid - 1;
              }
          }
          
          return ans; 
      }
  };

// TC : O(log n)
// SC:O(1)