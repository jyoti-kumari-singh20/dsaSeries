// Problem:Given two sorted arrays a[] and b[] and an element k, the task is to find the element that would be at the kth position of the combined sorted array.

// Code:
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        for(int i:b){
            a.push_back(i);
        }
        sort(a.begin(),a.end());
        return a[k-1];
    }
};

// TC:O((n+m)log(n+m))
// SC:O(1)
