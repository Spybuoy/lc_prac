class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        m = nums[0]
        M = nums[0]
        max_prod = nums[0]
        for each in nums[1:]:
            if each < 0:
                m, M = M, m
            m = min(each, each * m)
            M = max(each, each * M)
            max_prod = max(M, max_prod)
        return max_prod
