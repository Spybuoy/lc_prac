class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        my_dict = defaultdict(int)
        l, r = 0, 0
        res = 0
        n = len(s)
        while r < n:
            my_dict[s[r]] += 1

            curr_len = r - l + 1
            max_len = max(my_dict.values())

            if curr_len - max_len > k:
                my_dict[l] -= 1
                l += 1

            res = max(max_len, r - l + 1)  # imp, l is being updated

            r += 1
        return res
