class Solution {
public:
    int hammingWeight(int n) {
        int i=0, ans;
        while(n>0){
            i=n%2;
            ans +=i;
            n/=2;
        }
        return ans;
    }
};