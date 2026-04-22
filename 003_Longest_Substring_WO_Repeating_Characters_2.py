class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        my_set = set()
        l = 0
        r = 0
        L = len(s)
        max_len = 0
        while r < L:
            if s[r] not in my_set:
                my_set.add(s[r])
                max_len = max(r - l + 1, max_len)
                r += 1
            else:
                my_set.remove(s[l])
                l += 1
        return max_len
