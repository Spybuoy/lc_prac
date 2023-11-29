class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        if (intervals.empty()) {
            return {};
        }

        // Sort intervals based on the start time
        std::sort(intervals.begin(), intervals.end(), [](const auto& a, const auto& b) {
            return a[0] < b[0];
        });

        std::vector<std::vector<int>> mergedIntervals;
        mergedIntervals.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); ++i) {
            if (mergedIntervals.back()[1] >= intervals[i][0]) {
                // Merge overlapping intervals
                mergedIntervals.back()[1] = std::max(mergedIntervals.back()[1], intervals[i][1]);
            } else {
                // Add non-overlapping interval
                mergedIntervals.push_back(intervals[i]);
            }
        }

        return mergedIntervals;
    }
};