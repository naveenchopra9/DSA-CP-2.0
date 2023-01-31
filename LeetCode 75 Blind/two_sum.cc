// Two Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            if(freq.count(target - nums[i]) > 0){
                return {i,freq[target-nums[i]]};
            }
            else{
                freq[nums[i]] = i;
            }
        }
        
        return vector<int>();
    }
};