class Solution {
public:
    int romanToInt(string s) {
        std::unordered_map <char, int> map= {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int val, ans = 0, i, n = s.length();
        for(i=0;i<n;i++){
            if(map[s[i]]<map[s[i+1]]){
                val = map[s[i+1]]-map[s[i]];
                i++;
            }
            else
            {
                val = map[s[i]];
            }
            ans += val;
        }
        return ans;
    }
};