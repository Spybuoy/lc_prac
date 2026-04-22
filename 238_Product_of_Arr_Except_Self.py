class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        L = len(nums)
        l_arr = [1] * L
        r_arr = [1] * L
        res_arr = [1] * L
        l_prod = 1
        r_prod = 1
        for i in range(L):
            l_arr[i] = l_prod
            l_prod *= nums[i]
        for i in range(L - 1, -1, -1):
            r_arr[i] = r_prod
            r_prod *= nums[i]
        for i in range(L):
            res_arr[i] = l_arr[i] * r_arr[i]
        return res_arr
