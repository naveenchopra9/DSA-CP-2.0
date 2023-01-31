// Maximum Subarray
// Given an integer array nums, find the subarray with the largest sum, and return its sum.

// https://leetcode.com/problems/maximum-subarray/


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSubarray = nums[0];
        int maxSubarray = nums[0];

        for(int i=1;i<nums.size();i++){
            int num = nums[i];
            currentSubarray = max(num, currentSubarray + num);
            maxSubarray = max(maxSubarray, currentSubarray);
        }

        return maxSubarray;
    }
};