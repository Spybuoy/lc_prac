class Solution {
public:
    int characterReplacement(string s, int k) {
      int n = s.length(), l = 0, r, max_count = 0, max_len = 0;
      unordered_map <char, int> char_freq;

      for(r=0;r<n;r++){
          char_freq[s[r]]++;
          max_count = std::max(max_count, char_freq[s[r]]);

          if(r-l+1-max_count>k){
              char_freq[s[l]]--;
              l++;
          }
          max_len = std::max(max_len, r-l+1);
      }
      return max_len;
    }
};