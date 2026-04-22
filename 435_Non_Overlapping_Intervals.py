class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort(key=lambda x: x[1])
        count = 0
        prev_end = float("-inf")

        for each_0, each_1 in intervals:
            if each_0 >= prev_end:  # no overlap
                prev_end = each_1
            else:
                count += 1
        return count
