class Solution:
    def countSubstrings(self, s: str) -> int:
        n = len(s)
        self.count = 0
        res = ""

        def expand(l, r):
            while 0 <= l and r < n and s[l] == s[r]:
                l -= 1
                r += 1
                self.count += 1
            return s[l + 1 : r]

        for i in range(n):
            p1 = expand(i, i)
            p2 = expand(i, i + 1)
            res = max(p1, p2, res, key=len)
        return self.count
