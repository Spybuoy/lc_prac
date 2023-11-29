class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_prod = nums[0];
        int min_prod = nums[0];
        int result = nums[0];
        int i, l = nums.size();

        for(i = 1; i<l; i++)
        {
            int temp = nums[i];
            if(temp<0)
            {
                std::swap(max_prod, min_prod);
            }
            max_prod = std::max(temp, max_prod*temp);
            min_prod = std::min(temp, min_prod*temp);
            result = std::max(result, max_prod);
        }
        return result;
    }
}; // PRODUCT OF SUBARRAY
