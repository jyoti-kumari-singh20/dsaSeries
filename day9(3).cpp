// Problem: Given an array arr[], with 0-based indexing, select any two indexes, i and j such that i < j. From the subarray arr[i...j], select the smallest and second smallest numbers and add them, you will get the score for that subarray. Return the maximum possible score across all the subarrays of array arr[].

// Approach:Sum of two consecutive element is calculated and returned maximum value of sum.

// Code:
class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        // Your code goes here
        int sum;
        int max_sum=0;
        for(int i=0;i<arr.size()-1;i++){
            sum=arr[i]+arr[i+1];
            max_sum=max(sum,max_sum);
        }
        return max_sum;
    }
};

// TC:O(n)
// SC:O(1)
