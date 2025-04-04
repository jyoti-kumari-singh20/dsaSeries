// Problem: You are given a positive integer n, that is initially placed on a board. Every day, for 109 days, you perform the following procedure:

// For each number x present on the board, find all numbers 1 <= i <= n such that x % i == 1.
// Then, place those numbers on the board.
// Return the number of distinct integers present on the board after 109 days have elapsed.

// Code:
class Solution {
  public:
      int distinctIntegers(int n) {
          if(n==1){
              return 1;
          }
          else{
              return n-1;
          }
      }
  };

// TC:O(1)
// SC:O(1)