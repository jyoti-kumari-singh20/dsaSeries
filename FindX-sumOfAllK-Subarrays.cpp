// Problem
// You are given an array nums of n integers and two integers k and x.
// The x-sum of an array is calculated by the following procedure:
// Count the occurrences of all elements in the array.
// Keep only the occurrences of the top x most frequent elements. If two elements have the same number of occurrences, the element with the bigger value is considered more frequent.
// Calculate the sum of the resulting array.
// Note that if an array has less than x distinct elements, its x-sum is the sum of the array.
// Return an integer array answer of length n - k + 1 where answer[i] is the x-sum of the subarray nums[i..i + k - 1].

// Approach
// SLiding Window
// Priority Queue
// Hash Table

// Solution
class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        unordered_map<int, int> mp;
        vector<int> ans;

        auto cmp = [&](const pair<int,int>& a, const pair<int,int>& b) {
            if(a.first == b.first)
                return a.second < b.second;   
            return a.first < b.first;         
        };
        for(int i = 0; i < k; i++) {
            mp[nums[i]]++;
        }

        for(int i = k; i <= nums.size(); i++) {
            priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(cmp)> pq(cmp);
            for(auto &p : mp) pq.push({p.second, p.first});
            auto tmp = pq;
            pair<int,int> a={0,0}, b={0,0};
            if(!tmp.empty()) {
                a = tmp.top();
                tmp.pop();
            }
            if(!tmp.empty()) {
                b = tmp.top();
            }

            ans.push_back(a.second*a.first + b.second*b.first);

            if(i == nums.size()) break;
            mp[nums[i-k]]--;
            if(mp[nums[i-k]] == 0) mp.erase(nums[i-k]);
            mp[nums[i]]++;
        }

        return ans;
    }
};
