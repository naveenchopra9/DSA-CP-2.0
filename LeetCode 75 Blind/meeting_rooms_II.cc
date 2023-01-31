// Meeting Rooms II
// https://leetcode.com/problems/meeting-rooms-ii/

// Given an array of meeting time intervals intervals where intervals[i] = [starti, endi], return the minimum number of conference rooms required.

class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](vector<int> A, vector<int> B){
            return A[0] < B[0];
        });

        int nonOverlap = 0;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0] >= intervals[i-1][1]){
                nonOverlap++;
            }
        }

        return intervals.size() - nonOverlap;
    }
};