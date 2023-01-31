// Longest Palindromic Substring
// https://leetcode.com/problems/longest-palindromic-substring/description/
// Given a string s, return the longest palindromic substring in s.

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        vector<vector<bool>> dp(n,vector<bool>(n,false));
        int mxLen = 0,start = 0,end = 0;
        for(int len=1;len<=n;len++){
            for(int i=0,j=len-1;j<n;j++,i++){
                if(len == 1){
                    dp[i][j] = true;
                }
                else if(len == 2){
                    dp[i][j] = (s[i] == s[j] ? true : false);
                }
                else{
                    if(s[i] == s[j] and dp[i+1][j-1]){
                        dp[i][j] = true;
                    }
                    else{
                        dp[i][j] = false;
                    }
                }
                
                if(dp[i][j]){
                    int len = j - i + 1;
                    if(len > mxLen){
                        mxLen = len;
                        start = i;
                        end = j-i+1;
                    }
                }
            }
        }
        
        return s.substr(start,end);
    }
};