class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map <int, int> u_map;
        int l = nums.size() / 2;
        for (auto i : nums) {
            u_map[i]++;
            if (u_map[i] > l) {
                return i;
                break;
            }
        }
        return -1;
    }
};