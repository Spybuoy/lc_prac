class Solution:
    def climbStairs(self, n: int) -> int:
        l = 0
        r = 1
        for _ in range(n):
            curr = l + r
            l = r
            r = curr
        return r
