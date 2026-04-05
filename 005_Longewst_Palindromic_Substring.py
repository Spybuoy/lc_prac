class Solution:
    def longestPalindrome(self, s: str) -> str:
        if not s:
            return ""
        res = ""
        L = len(s)

        def expand(l, r):
            while l >= 0 and r < L and s[l] == s[r]:
                l -= 1
                r += 1
            return s[l + 1 : r]

        for i in range(L):
            p1 = expand(i, i)
            p2 = expand(i, i + 1)
            res = max(p1, p2, res, key=len)
        return res
