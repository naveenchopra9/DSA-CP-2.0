// Valid Parentheses
// https://leetcode.com/problems/valid-parentheses/
/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
	Open brackets must be closed by the same type of brackets.
	Open brackets must be closed in the correct order.
	Every close bracket has a corresponding open bracket of the same type.
*/


class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> mp;
        mp['('] = ')';
        mp['['] = ']';
        mp['{'] = '}';
        
        
        stack<char> st;
        for(auto &x : s){
            if(mp.find(x) != mp.end()){
                st.push(x);
            }
            else{
                if(st.empty()) return false;
                else if(mp[st.top()] == x) st.pop();
                else return false;
            }
        }
        
        return st.empty();
    }
};