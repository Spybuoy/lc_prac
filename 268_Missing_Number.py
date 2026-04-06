class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        S = sum(nums)
        n = len(nums)
        ap_s = n * (n + 1) / 2
        return int(ap_s - S)
