class Solution:
    def reverseBits(self, n: int) -> int:
      c = 32
      res = 0
      while n!=0:
        c-=1
        res += (n%2)* (2**c)
        n = n//2
      return res
