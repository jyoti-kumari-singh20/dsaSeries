// Problem:Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
// You must solve this problem without using the library`s sort function.

// Approach:Insertion sort

// Code:
class Solution {
  public:
      void sortColors(vector<int>& nums) {
          for(int i=1;i<nums.size();i++){
              int temp=nums[i];
              int j=i-1;
              while(j>=0 && temp<nums[j]){
                  nums[j+1]=nums[j];
                  j--;
              }
              nums[j+1]=temp;
          }
      }
  };

// TC:O(n^2)
// SC:O(1)