class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = haystack.find(needle);
        return (index != string::npos)?index:-1;
    }
};