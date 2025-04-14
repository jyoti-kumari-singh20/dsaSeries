// Problem:A digit string is good if the digits (0-indexed) at even indices are even and the digits at odd indices are prime (2, 3, 5, or 7).
// For example, "2582" is good because the digits (2 and 8) at even positions are even and the digits (5 and 2) at odd positions are prime. However, "3245" is not good because 3 is at an even index but is not even.
// Given an integer n, return the total number of good digit strings of length n. Since the answer may be large, return it modulo 10^9 + 7.
// A digit string is a string consisting of digits 0 through 9 that may contain leading zeros.

// Code:
class Solution {
  public:
      const long long MOD = 1e9 + 7;
  
      long long modPow(long long base, long long exp, long long mod) {
          long long result = 1;
          base %= mod;
          while (exp > 0) {
              if (exp % 2 == 1)
                  result = (result * base) % mod;
              base = (base * base) % mod;
              exp /= 2;
          }
          return result;
      }
      int countGoodNumbers(long long n) {
          long long evens = (n + 1) / 2;
          long long odds = n / 2;
  
          return (modPow(5, evens, MOD) * modPow(4, odds, MOD)) % MOD;
      }
  };

// TC:O(log n)
// SC:O(1)