// Problem: You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

// Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

// Code:
class Solution{
  public:
      bool canPlaceFlowers(vector<int>& flowerbed, int n) {
          int count = 0;
          int i = 0;
          int len = flowerbed.size();
          while(i < len){
              if(flowerbed[i] ==0){
                  if((i == 0 || flowerbed[i-1] == 0) && (i == len-1 || flowerbed[i+1] == 0)){
                      flowerbed[i] = 1;
                      count++;
                      i++;
                  }
              }
              i++;
          }
          return count >= n;
      }
  };

// TC=O(n)
// SC=O(1)
  