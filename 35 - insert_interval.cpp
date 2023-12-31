class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int i = 0, n = intervals.size();
        vector<vector<int>> ans;
        while(i<n && intervals[i][1]<newInterval[0]){
            ans.push_back(intervals[i]);
            i++;
        }
        while(i<n && intervals[i][0]<=newInterval[1]){
        newInterval[0] = std::min(newInterval[0], intervals[i][0]);
        newInterval[1] = std::max(newInterval[1], intervals[i][1]);
            i++;
        }
        ans.push_back(newInterval);
        while (i < n) {
        ans.push_back(intervals[i]);
        i++;
    }
    return ans;
    }
};