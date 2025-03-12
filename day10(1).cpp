// Problem:You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.
// You should return the array of nums such that the the array follows the given conditions:
// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.
// Return the modified array after rearranging the elements to satisfy the aforementioned conditions

// Approach:TWO POINTER APPROACH

// Code:
class Solution {
  public:
      vector<int> rearrangeArray(vector<int>& nums) {
          int pos = 0;
          int neg = 1;
          vector<int>result(nums.size());
          for(int num: nums){
              if(num>0){
                  result[pos]=num;
                  pos+=2;
              }
              else{
                  result[neg]=num;
                  neg+=2;
              }
          }
          return result;
      }
  };
  
// TC:O(n)
// SC:O(n)