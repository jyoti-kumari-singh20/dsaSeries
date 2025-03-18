// Problem:You are given an m x n integer matrix matrix with the following two properties:
// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// Code:
class Solution {
  public:
      bool searchMatrix(vector<vector<int>>& matrix, int target) {
          int rows=matrix.size();
          int cols=matrix[0].size();
          int row = 0, col = cols - 1; 
          while (row < rows && col >= 0) {
              if (matrix[row][col] == target)
                  return true;
              else if (matrix[row][col] > target)
                  col--;
              else
                  row++;
              }
          return false;
      }
  };

// TC:O(log(m*n))
// SC:O(1)
