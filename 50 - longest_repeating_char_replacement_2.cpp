class Solution {
  public:
    bool isAnagram(string s, string t) {
      std::unordered_map <char, int> char_set;
      if(s.length()!=t.length()){
        return false;
      }
      for (auto x: s){
        char_set[x]++;
      }
      for (auto x: t){
        char_set[x]--;
      }
      for(auto x: char_set){
        if(x.second>0) return false;
      }
      return true;
    }
};
