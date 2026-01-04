class Solution {
  public:
    bool isAnagram(string s, string t) {
      std::unordered_map <char, int> char_set;
      if(s.length()!=t.length()){
        return false;
      }
      for (auto x: s){ // add num of times each char occurs
        char_set[x]++;
      }
      for (auto x: t){ // sub num of times each char occurs
        char_set[x]--;
      }
      for(auto x: char_set){ // if any resulting times is != 0, then not an anagram
        if(x.second>0) return false;
      }
      return true;
    }
};
