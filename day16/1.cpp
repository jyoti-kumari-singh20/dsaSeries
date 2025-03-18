// Problem:A peak element in a 2D grid is an element that is strictly greater than all of its adjacent neighbors to the left, right, top, and bottom.
// Given a 0-indexed m x n matrix mat where no two adjacent cells are equal, find any peak element mat[i][j] and return the length 2 array [i,j].
// You may assume that the entire matrix is surrounded by an outer perimeter with the value -1 in each cell.

// Code:
class Solution {
  public:
      vector<int> findPeakGrid(vector<vector<int>>& mat) {
          int rows = mat.size(), cols = mat[0].size();
          int left = 0, right = cols - 1;
  
          while (left <= right) {
              int mid = left + (right - left) / 2;
              int maxRow = 0;
              for (int i = 0; i < rows; i++) {
                  if (mat[i][mid] > mat[maxRow][mid]) {
                      maxRow = i;
                  }
              }
              int leftVal = (mid > 0) ? mat[maxRow][mid - 1] : -1;
              int rightVal = (mid < cols - 1) ? mat[maxRow][mid + 1] : -1;
              if (mat[maxRow][mid] > leftVal && mat[maxRow][mid] > rightVal) {
                  return {maxRow, mid};
              }
              else if (leftVal > mat[maxRow][mid]) {
                  right = mid - 1;
              } else {
                  left = mid + 1;
              }
          }
          return {-1, -1}; 
      }
  };
  
// TC:O(n(logm))
// SC:O(1)
