class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int cur_val, ret_val = 0;
        while(left<right)
        {
            int H = height[left], R = height[right];
            cur_val = min(H,R)*(right-left);
            if(cur_val>ret_val)
            {
                ret_val = cur_val;
            }
            if(H<R)
            left++;
            else
            right--;
        }
        return ret_val;
    } // Container with most water
};
