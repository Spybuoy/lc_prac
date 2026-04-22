class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        nums.sort()
        res = []
        L = len(nums)
        for i in range(L):
            if i > 0 and nums[i] == nums[i - 1]:
                continue

            j, k = i + 1, L - 1

            while j < k:
                temp = nums[i] + nums[j] + nums[k]
                if temp == 0:
                    res.append([nums[i], nums[j], nums[k]])
                    j += 1
                    k -= 1
                    while j < k and nums[j] == nums[j - 1]:
                        j += 1
                elif temp < 0:
                    j += 1
                else:
                    k -= 1
        return res
