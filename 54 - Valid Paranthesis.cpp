class Solution {
public:
    bool isValid(string s) {
        std::unordered_map<char,char> u_map = {{')', '('}, {']', '['}, {'}', '{'}};
        std::stack<char> st;

        for(auto i: s){
            if(u_map.find(i)!=u_map.end()){
                if(st.empty()) {return 0;}
                if(st.top()==u_map[i]) {
                    st.pop();
                }
                else {return 0;}
            }
            else {st.push(i);}
        }
        return (st.empty());
    }
};