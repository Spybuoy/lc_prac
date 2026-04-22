class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        my_dict = Counter(nums)
        temp = my_dict.most_common()
        res = []
        for x, y in temp:
            if k > 0:
                res.append(x)
                k -= 1
            else:
                break

        return res
