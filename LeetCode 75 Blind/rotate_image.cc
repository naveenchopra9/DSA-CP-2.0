// Rotate Image
// https://leetcode.com/problems/rotate-image/

// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // transpose and reverse
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<m;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(auto &m : matrix){
            reverse(m.begin(),m.end());
        }
        
    }
};