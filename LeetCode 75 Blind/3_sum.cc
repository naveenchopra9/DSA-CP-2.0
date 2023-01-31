// https://leetcode.com/problems/3sum/
// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
// Notice that the solution set must not contain duplicate triplets.

// 3 Sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        
        for(int i=0;i<nums.size() && nums[i] <= 0;i++){
            if(i == 0 or nums[i-1] != nums[i]){
                twoSumII(nums,i,res);
            }
        }
        
        return res;
    }
    
    
    void twoSumII(vector<int>&nums,int i,vector<vector<int>>&res){
        int l = i+1,r = nums.size() - 1;
        while(l < r){
            int sum = nums[i] + nums[l] + nums[r];
            if(sum < 0){
                ++l;
            }
            else if(sum > 0){
                --r;
            }
            else{
                res.push_back({nums[i],nums[l++],nums[r--]});
                while(l < r and nums[l] == nums[l-1]){
                    ++l;
                }
            }
        }
    }
};