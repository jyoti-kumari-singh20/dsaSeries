#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
      vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
          int l1=nums1.size();
          int l2=nums2.size();
          vector<vector<int>> ans;
          for(int i=0;i<l1;i++){
              for(int j=0;j<l2;j++){
                  if(nums1[i][0]==nums2[j][0]){
                      ans[i][0]=nums1[i][0];
                      ans[i][1]=nums1[i][1]+nums2[j][1];
                  }
                  else{
                      ans.push_back(nums1[i]);
                  }
              }
          }
          return nums1;
      }
  };