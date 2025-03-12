// Problem:You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// Code:
class Solution {
  public:
      int maxProfit(vector<int>& prices) {
          int n = prices.size();
          if (n == 0) 
              return 0; 
          int min_price = prices[0]; 
          int max_pr = 0; 
          for (int i = 1; i < n; i++) {
              int profit = prices[i] - min_price;
              max_pr = max(max_pr, profit);
              min_price = min(min_price, prices[i]);
          }
          
          return max_pr;
      }
  };

// TC:O(n)
// SC:O(1)