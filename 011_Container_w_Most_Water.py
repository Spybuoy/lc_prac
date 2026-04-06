class Solution:
    def maxArea(self, height: List[int]) -> int:
        l = 0
        L = len(height)
        r = L - 1
        max_vol = 0
        while l < r:
          diff = r - l
          hl = height[l]
          hr = height[r]
          hmin = hl if hl<hr else hr
          vol = hmin * diff
          max_vol = max_vol if max_vol > vol else vol
          if hl < hr:
            l+=1
          else:
            r-=1
        return max_vol