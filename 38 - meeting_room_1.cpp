class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        if(intervals.empty()){    return true;   }
        std::sort(intervals.begin(), intervals.end(), 
        [](const auto &a, const auto&b){
            return a[0]<b[0];
        }); 
        int i, n = intervals.size();
        for(i=0;i<n-1;i++){
            if(intervals[i][1]>intervals[i+1][0]){
                return false;
            }
        }
            return true;
        }
};