class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        res = []
        intervals.sort(key=lambda x: x[0])
        for each in intervals:
            # if res empty or last elem's [1] < each[0] curr
            if not res or res[-1][1] < each[0]:
                res.append(each)
            else:
                res[-1][1] = max(res[-1][1], each[1])
        return res
