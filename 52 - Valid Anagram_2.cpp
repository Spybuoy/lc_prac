class Solution {
public:
    bool isAnagram(string s, string t) {
       std::unordered_map<char, int> char_map;
        if(s.length()!=t.length()) return 0;
        for(auto x: s){
            char_map[x]++;
        }
        for(auto x: t){
            char_map[x]--;
        }
        for(auto x: char_map){
            if(x.second>0) return 0;
        }
        return 1;
    }
};
