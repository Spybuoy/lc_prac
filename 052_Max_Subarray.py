class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        curr_sum = nums[0]
        max_sum = nums[0]
        for each in nums[1:]:
            curr_sum = max(each + curr_sum, each)
            max_sum = max(max_sum, curr_sum)
        return max_sum
