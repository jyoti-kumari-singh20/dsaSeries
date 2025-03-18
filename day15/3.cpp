// Problem:Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.

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
