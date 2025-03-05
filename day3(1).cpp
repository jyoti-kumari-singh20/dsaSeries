// Problem :Given an integer n, return true if it is possible to represent n as the sum of distinct powers of three. Otherwise, return false.
// An integer y is a power of three if there exists an integer x such that y == 3^x.

// Problem Link:https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three/description/

// Code:

#include<bits/stdc++.h>
class Solution {
  public:
      bool checkPowersOfThree(int n) {
          while (n > 0) {
              if (n % 3 == 2) {
                  return false;
              }
              n /= 3;
          }
          return true;
      }
  };
  
// Approach: Given number is converted into base-3 number.If it has 2 in digits then it is not sum of power of 3,otherwise it is.

// Time Complexity: O(log n)
// Space Complexity: O(1)
