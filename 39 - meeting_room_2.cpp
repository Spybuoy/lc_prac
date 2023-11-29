class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        if(intervals.empty()){
            return 0;
        }
        std::sort(intervals.begin(), intervals.end(), 
        [](const auto &a, const auto &b){ return a[0]<b[0];});
        std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
        minHeap.push(intervals[0][1]);
        for (int i = 1; i < intervals.size(); ++i) {
                     if (intervals[i][0] >= minHeap.top()) {
                      minHeap.pop();
            }
            minHeap.push(intervals[i][1]);
        }
        return minHeap.size();
    }
};