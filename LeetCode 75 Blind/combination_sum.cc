// Combination Sum
// https://leetcode.com/problems/combination-sum/description/
/*
Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.
The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the 
 of at least one of the chosen numbers is different.
The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.
*/


class Solution {
public:
    void backtrack(int remain, vector<int> &comb, int start, vector<int> &candidates, vector<vector<int>> &results){
        if(remain == 0){
            results.push_back(comb);
            return;
        }

        else if(remain < 0){
            return;
        }

        for(int i=start; i<candidates.size(); i++){
            comb.push_back(candidates[i]);
            backtrack(remain - candidates[i], comb, i, candidates, results);
            comb.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> results;
        vector<int> comb;
        backtrack(target, comb, 0, candidates, results);
        return results;
    }
};