class Solution:
    def findMin(self, nums: List[int]) -> int:
        n = len(nums)
        l = 0
        r = n - 1
        m = nums[0]
        while l <= r:
            mid = (l + r) // 2
            if nums[mid] < m:
                m = nums[mid]
                r = mid - 1
            else:
                l = mid + 1
        return m
