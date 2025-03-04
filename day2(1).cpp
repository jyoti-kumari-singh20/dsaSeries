#include<bits/stdc++.h>
using namespace std;
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