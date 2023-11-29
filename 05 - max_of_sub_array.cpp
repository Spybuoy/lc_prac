class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0], current_sum = nums[0], i, l = nums.size();
        for(i = 1; i<l; i++)
        {
            current_sum = std::max(nums[i], nums[i]+current_sum);
            max_sum = std::max(max_sum, current_sum);
        }
        return max_sum;
// maximum summation of a subarray
    }
};
