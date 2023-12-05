class Solution {
public:
    bool palin(string &ip, int i, int j){
        while(i<j){
            if(ip[i]!=ip[j]){
                return 0;
            }
            i++; j--;
        }
        return 1;
    }
    string longestPalindrome(string s) {
        int n = s.length();
        int left = 0, i, j, max_len = 0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(palin(s, i, j)){
                    if(j-i+1>max_len){
                        max_len = j-i+1;
                        left = i;
                    }
                }
            }
        } return s.substr(left, max_len);
    }
};