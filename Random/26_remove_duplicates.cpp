class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::set <int> nums_set;
        for(auto i: nums){
            nums_set.insert(i);
        }
        nums.clear();
        for(auto iter: nums_set){
            nums.push_back(iter);
        }
        return nums_set.size();
    }
};