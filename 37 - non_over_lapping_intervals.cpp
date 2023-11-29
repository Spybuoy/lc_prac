class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        std::sort(intervals.begin(), intervals.end(), 
        [](const auto&a, const auto&b){
            return a[1]<b[1];});
    int n = intervals.size();
    int removed = 0;
    int current = 0, next = 1;
    while(next<n){
        if(intervals[current][1]>intervals[next][0]){
            removed++;
            if(intervals[current][1]>intervals[next][1]){
                current = next;
            }
        }
        else{
            current = next;
        }
        next++;
    }   
    return removed;
    }
};