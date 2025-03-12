// Problem:Given an m x n matrix, return all elements of the matrix in spiral order.

// Code:
class Solution {
  public:
      vector<int> spiralOrder(vector<vector<int>>& matrix) {
          if (matrix.empty()) 
              return {};
          int minrow = 0;
          int maxrow = matrix.size()-1;
          int mincol = 0;
          int maxcol = matrix[0].size()-1;
          vector<int> ans;
          while( minrow <= maxrow && mincol <= maxcol ){
              int i = minrow;
              for( int j = mincol ; j <= maxcol ; j++){
                  ans.push_back(matrix[i][j]);
              }
              minrow++;
              int j = maxcol ;
              for( int i = minrow ; i <= maxrow ; i++ ){
                  ans.push_back(matrix[i][j]);
              }
              maxcol--;
              i = maxrow ;
              if (minrow <= maxrow) {
                  for( int j = maxcol ; j >= mincol ; j-- ){
                      ans.push_back(matrix[i][j]);
                  }
                  maxrow--;
              }
              j = mincol;
              if (mincol <= maxcol) {
                  for( int i = maxrow ; i >= minrow ; i-- ){
                      ans.push_back(matrix[i][j]);
                  }
                  mincol++;
              }
          }
          return ans;
      }
  };

// TC:O(m*n)
// SC:O(m*n)