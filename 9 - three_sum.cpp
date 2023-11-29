class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::vector<std::vector<int>> ans;
        std::sort(nums.begin(),nums.end());
        set<vector<int>> s;
        int i,j,k,l = nums.size();
        for(i=0;i<l;i++)
        {
            j = i+1;
            k = l-1;
            while(j<k){
                int a = nums[i], b = nums[j], c = nums[k];
                int sum = a+b+c;
                if(sum==0){

                    s.insert({a,b,c});
                    j++;
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else
                {
                    k--;
                }
            }

        }
        for(auto iter: s)
            ans.push_back(iter);
        return ans;
} // 3 SUM
};
