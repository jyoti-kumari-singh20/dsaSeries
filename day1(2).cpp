// Problem: Given a number x, reverse its binary form and return the answer in decimal.

// Approach:While we reverse the given decimal in binary since it is of 32 bits so we used bitwise operators and coversion formula from binary to decimal

// Code:
class Solution {
  public:
    long long reversedBits(long long x) {
        long long ans=0,i=31;
        while (x!=0){
            if(x&1){
            ans=pow(2,i)+ans;
            }
            i--;    
            x=(x>>1);
        }
        return ans; 
    }
};

// TC:O(1)
// SC:O(1)