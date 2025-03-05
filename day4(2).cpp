// Problem:Given an array arr[] of positive integers, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets among m students such that -
// i. Each student gets exactly one packet.
// ii. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum and return that minimum possible difference.

// Code:
class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        int n=a.size();
        if(m==0 || n==0){
            return 0;
        }
        sort(a.begin(),a.end());
        int min_diff=1000000;
        
        for(int i=0;i<n-m+1;i++){
            int diff=a[i+m-1]-a[i];
            min_diff=min(min_diff,diff);
        }
        return min_diff;
    }
};

// TC:O(n logn)
// SC:O(1)
