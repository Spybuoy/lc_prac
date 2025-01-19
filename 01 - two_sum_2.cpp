class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> u_map;
        int i=0, comp, n = nums.size();
        for(auto x: nums){
            u_map[x] = i;
            i++;
        }

        for(i=0;i<n;i++){
            comp = target - nums[i];
            if(u_map.find(comp)!=u_map.end()){
                if(u_map[comp]!=i)  return {u_map[comp], i};
            }
        }
        return {};
    }
}; 