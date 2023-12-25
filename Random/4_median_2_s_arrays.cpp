class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> temp;
        int n = (nums1.size()+nums2.size());
        for(auto i: nums1){
            temp.push_back(i);
        }
        for(auto i: nums2){
            temp.push_back(i);
        }
        std::sort(temp.begin(), temp.end());
        if(n%2==1){
            return temp[n/2];
        }
        else
        {
            return (temp[n/2]+temp[(n/2)-1])/2.0;
        }

    }
};