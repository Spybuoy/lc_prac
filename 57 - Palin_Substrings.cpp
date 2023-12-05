class Solution {
public:
int countSubstrings(std::string s) {
    int n = s.length();
    int count = 0;

    // Create a table to store the results of subproblems
    std::vector<std::vector<bool>> dp(n, std::vector<bool>(n, false));

    // All single characters are palindromes
    for (int i = 0; i < n; ++i) {
        dp[i][i] = true;
        count++;
    }

    // Check substrings of length 2
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = true;
            count++;
        }
    }

    // Check substrings of length 3 or more
    for (int len = 3; len <= n; ++len) {
        for (int i = 0; i <= n - len; ++i) {
            int j = i + len - 1; // Ending index of substring

            // Check if the substring is a palindrome
            if (dp[i + 1][j - 1] && s[i] == s[j]) {
                dp[i][j] = true;
                count++;
            }
        }
    }

    return count;
}
};
