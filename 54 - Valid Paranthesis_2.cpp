class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> u_map = {{')','('},{'}','{'},{']','['}};
        stack<char> stk;
        for (auto i: s){
            // left brace not present hence add to stk
            if(u_map.find(i)==u_map.end()){
                stk.push(i);
            }
            // iter's the right brace, checking it it's closing brace
            else { // "]"           "(" != u_map["}"]
                if(stk.empty() || stk.top() != u_map[i]){
                    return 0;
                }
                stk.pop(); // popping the top element
            }
        } return stk.empty();
    }
};