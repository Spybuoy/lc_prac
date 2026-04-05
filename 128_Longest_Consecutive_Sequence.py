class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        s_num = sorted(set(nums))
        l = 0
        r = 1
        M = 1
        s = 1
        if len(nums) == 0:
            return 0
        temp = [s_num[0]]
        for i, val in enumerate(s_num):
            if i > 0:
                if s_num[i] - 1 == s_num[i - 1]:
                    temp.append(val)
                    s = len(temp)
                    M = max(s, M)
                else:
                    temp = [val]
        return M
