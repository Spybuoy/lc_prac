class Solution {
public:
    bool isPalindrome(int x) {
        long long n = x, rem, rev = 0;
        if(n<0) return 0;
        while(n!=0){

          rem = n%10;
          rev = (rev*10) + rem;
          n /= 10;

        }
        return (rev==x);
    }
};