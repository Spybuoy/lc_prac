class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}
        for i, each in enumerate(nums):
            comp = target - each
            if comp in hashmap:
                return [i, hashmap[comp]]
            else:
                hashmap[each] = i
        return []
