class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        hashmap = {}
        max_len = 0
        l = 0
        for r, char in enumerate(s):
            if char in hashmap and hashmap[char] >= l:
                # hashmap[char] >= l makes sure we stay in the window
                l = hashmap[char] + 1
            hashmap[char] = r
            max_len = max(max_len, r - l + 1)

        return max_len
