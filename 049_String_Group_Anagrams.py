class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        my_dict = defaultdict(list)

        for each in strs:
            sorted_str = "".join(sorted(each))
            my_dict[sorted_str].append(each)
        return list(my_dict.values())
