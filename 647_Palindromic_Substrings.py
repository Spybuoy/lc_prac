class Solution:
    def countSubstrings(self, s: str) -> int:
        if not s:
            return 0
        L = len(s)
        self.count = 0

        def expand(l, r):
            while l >= 0 and r < L and s[l] == s[r]:
                self.count += 1  # UnboundLocalError: cannot access local variable 'count' : if self is not used
                l -= 1
                r += 1
            return s[l + 1 : r]

        for i in range(L):
            p1 = expand(i, i)
            p2 = expand(i, i + 1)
        return self.count
