// Group Anagrams
// https://leetcode.com/problems/group-anagrams/

// Given an array of strings strs, group the anagrams together. You can return the answer in any order.

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto &x : strs){
            string t = x;
            sort(t.begin(),t.end());
            mp[t].push_back(x);
        }
        vector<vector<string>> ret;
        for(auto &[a,b] : mp){
            ret.push_back(b);
        }
        
        return ret;
    }
};