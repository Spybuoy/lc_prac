class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> l_arr (n, 1);
        vector<int> r_arr (n, 1);
        vector<int> res (n, 1);
        int l_prod = 1, r_prod = 1, i;

        for(i = 0; i< n; i++)
        {
            l_arr[i] = l_prod;
            l_prod *= nums[i];
        }
        for(i = n-1; i>=0; i--)
        {
            r_arr[i] = r_prod;
            r_prod *= nums[i];
        }
        for(i = 0; i<n; i++)
        {
            res[i] = l_arr[i]*r_arr[i];
        }
        return res;
    } // PROD EXCEPT THAT ELEMENT
};
