// Container With Most Water
// https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        const int n = height.size();
        int water = 0;
        int l = 0,r = n-1;
        
        while(l < r){
            water = max(water,min(height[l],height[r])*(r-l));
            if(height[l] < height[r]) l++;
            else r--;
        }
        
        return water;
    }
};