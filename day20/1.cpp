// Problem:Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.
// Return the sorted string. If there are multiple answers, return any of them.

// Code:
class Solution {
  public:
      string frequencySort(string s) {
          map<char,int> m;
          vector<pair<int,char>> v;
          for(int i=0;i<s.size();i++){
              m[s[i]]++;
          }
          for(auto& it:m){
              v.push_back({it.second,it.first});
          }
          sort(v.begin(),v.end(),greater<pair<int,char>>());
          string ans;
          for(int i=0;i<v.size();i++){
            int z=v[i].first;
            while(z>0){
              ans.push_back(v[i].second);
              z--;  
          }
      }
      return ans;
      }
  };

// TC:O(nlogn)
SC:O(n/)