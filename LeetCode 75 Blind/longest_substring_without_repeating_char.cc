// Longest Substring Without Repeating Characters
// https://leetcode.com/problems/longest-substring-without-repeating-characters/
// Given a string s, find the length of the longest substring without repeating characters.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> freq;
        int left = 0, right = 0;
        int res = 0;
        int n = s.size();
        
        while(right < n){
            if(freq.count(s[right])){
                res = max(res, right - left);
                left = max(freq[s[right]] + 1,left);
            }
            freq[s[right]] = right;
            right++;
        }
        res = max(res, right - left);
        return res;
    }
};