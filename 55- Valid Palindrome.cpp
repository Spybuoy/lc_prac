class Solution {
public:
    bool isPalindrome(string s) {
        std::string str1;
        for(auto i: s){
            if(std::isalnum(i)){
                str1 += std::tolower(i);
            }
        }
        std::string str2 = str1;
        std::reverse(str2.begin(),str2.end());
        return (str1==str2);
    }
};