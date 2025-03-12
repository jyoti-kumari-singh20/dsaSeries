// Problem:Given an integer numRows, return the first numRows of Pascal's triangle.

// Approach:Recursion

// Code:
class Solution {
  public:
      vector<vector<int>> generate(int numRows) {
          if (numRows == 0) 
              return {};
          vector<vector<int>> prevRows = generate(numRows - 1);
          vector<int> newRow(numRows, 1);
          for (int i = 1; i < numRows - 1; i++) {
              newRow[i] = prevRows.back()[i - 1] + prevRows.back()[i];
          }
          prevRows.push_back(newRow);
          return prevRows;
      }
  };

  // TC:O(n^2)
  // SC:O(n^2)