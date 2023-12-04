class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> char_set;
        int n = s.length();
        int left = 0, right = 0, max_length = 0;

        while(right<n){
            if(char_set.find(s[right])==char_set.end()){
                char_set.insert(s[right]);
                max_length = std::max(max_length, right-left+1);
                right++;
            }
            else{
                char_set.erase(s[left]);
                left++;
            }
        }
        return max_length;
    }
};