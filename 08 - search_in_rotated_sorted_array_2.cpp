class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int,int> u_map;
        int i=0;
        for(auto x: nums){
            u_map[x] = i;
            i++;
        }
        int result = (u_map.find(target)!=u_map.end())?u_map[target]:(-1);
        return result;
    }
};