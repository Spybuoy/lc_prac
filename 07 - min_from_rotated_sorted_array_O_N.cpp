class Solution {
public:
    int findMin(vector<int>& nums) {
        int min = nums[0];
        for(auto x: nums){
            if(x<min){
                return x;
            }
        }
        return min;
    }
};