class Solution:
    def hammingWeight(self, n: int) -> int:
        tot = 0
        temp = n
        while temp != 0:
            tot += temp % 2
            temp = int(temp / 2)
        return tot
