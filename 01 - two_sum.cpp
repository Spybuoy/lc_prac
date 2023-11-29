class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = nums.size(), i, j, temp;
        for(i = 0; i<l-1; i++)
        {   
            for (j = i+1; j<l;j++)
            {
                temp = nums[i]+nums[j];
                if(temp==target)
                {
                    return (vector<int>{i,j});
                }
            }
        }
    return nums;
    }
    // TWO SUM
};
