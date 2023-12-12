class Solution {
public:
    int lengthOfLastWord(string s) {
        int i, n = s.length(), flag = 0, ans = 0; 
        for(i=n-1;i>=0;i--){
            if(flag == 0){
                if(s[i]==' '){
                    continue;
                }
                else{
                    flag = 1;
                }
            }
            else
            {
                if(s[i]!=' '){
                    ans += 1;
                }
                else{
                    break;
                }
            }
        }
        return ans+1;
    }
};