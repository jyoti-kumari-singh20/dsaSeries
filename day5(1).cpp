// Problem:You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2]. Each integer appears exactly once except a which appears twice and b which is missing. The task is to find the repeating and missing numbers a and b.

// Return a 0-indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.

// Code:
class Solution {
  public:
      vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
          int n = grid.size();
          int size = n * n;
  
          vector<int> count(size+1,0);
          for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){
                  count[grid[i][j]]++;
              }
          }
              
          int a=-1, b = -1;
          
          for(int num=1;num<=size;num++){
              if (count[num] == 2){
                  a = num;
              }
              else if (count[num] == 0){
                  b = num;
              }
          }       
          return {a,b};
      }
  };

  // TC:O(n^2)
  // SC:O(n^2)