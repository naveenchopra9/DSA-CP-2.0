// Search in Rotated Sorted Array
/*
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.
*/

// https://leetcode.com/problems/search-in-rotated-sorted-array/


class Solution {
    vector<int> nums;
    int target;
public:
    
    int findRotateIndex(int left,int right){
        if(nums[left] < nums[right]){
            return 0;
        }
        
        while(left <= right){
            int pivot = (left + right) / 2;
            if(nums[pivot] > nums[pivot + 1]){
                return pivot + 1;
            }
            else{
                if(nums[pivot] < nums[left]){
                    right = pivot - 1;
                }
                else{
                    left = pivot + 1;
                }
            }
        }
        return 0;
    }
    
    int search(int left,int right){
        while(left <= right){
            int pivot = (left + right)/2;
            if(nums[pivot] == target){
                return pivot;
            }
            else{
                if(target < nums[pivot]){
                    right = pivot - 1;
                }
                else{
                    left = pivot + 1;
                }
            }
        }
        
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        this->nums = nums;
        this->target = target;
        
        const int n = nums.size();
        
        if(n == 1) return this->nums[0] == target ? 0 : -1;
        
        int rotateIndex = findRotateIndex(0,n-1);
        
        if(nums[rotateIndex] == target){
            return rotateIndex;
        }
        
        if(rotateIndex == 0){
            return search(0,n-1);
        }
        
        if(target < nums[0]){
            return search(rotateIndex,n-1);
        }
        
        return search(0,rotateIndex);
    }
};