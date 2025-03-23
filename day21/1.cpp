// Problem:Given a string s of lowercase alphabets, count all possible substrings (not necessarily distinct) that have exactly k distinct characters. 

// Code:
class Solution {
  public:
    int countSubstr(string& s, int k) {
        // code here.
        return countAtMostK(s,k)-countAtMostK(s,k-1);
    }
    int countAtMostK(string& s, int k){
        if (k < 0) return 0;
        int left = 0, right = 0, res = 0;
        unordered_map<char, int> freq;
        while (right < s.size()) {
            freq[s[right]]++;
            
            while (freq.size() > k) {
                freq[s[left]]--;
                if (freq[s[left]] == 0) {
                    freq.erase(s[left]);
                }
                left++;
            }
            res += (right - left + 1);
            right++;
        }
        return res;
    }
};

// TC:O(n)
// SC:O(k)