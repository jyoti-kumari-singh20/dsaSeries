// Problem:You are given two 2D integer arrays nums1 and nums2.
// nums1[i] = [idi, vali] indicate that the number with the id idi has a value equal to vali.
// nums2[i] = [idi, vali] indicate that the number with the id idi has a value equal to vali.
// Each array contains unique ids and is sorted in ascending order by id.
// Merge the two arrays into one array that is sorted in ascending order by id, respecting the following conditions:
// Only ids that appear in at least one of the two arrays should be included in the resulting array.
// Each id should be included only once and its value should be the sum of the values of this id in the two arrays. If the id does not exist in one of the two arrays, then assume its value in that array to be 0.
// Return the resulting array. The returned array must be sorted in ascending order by id.

// Code:

class Solution {
  public:
      vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
          int l1 = nums1.size();
          int l2 = nums2.size();
          vector<vector<int>> ans;
          int i = 0, j = 0;
          while (i < l1 && j < l2) {
              if (nums1[i][0] < nums2[j][0]) {
                  ans.push_back(nums1[i]);
                  i++;
              } else if (nums1[i][0] > nums2[j][0]) {
                  ans.push_back(nums2[j]);
                  j++;
              } else {
                  int val=nums1[i][1] + nums2[j][1];
                  ans.push_back({nums1[i][0], val});
                  i++;
                  j++;
              }
          }
          while (i < l1) {
              ans.push_back(nums1[i]);
              i++;
          }
          while (j < l2) {
              ans.push_back(nums2[j]);
              j++;
          }
          return ans;
      }
  };

// TC:O(n)
// SC:O(1)