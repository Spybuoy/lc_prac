class Solution:
    def countBits(self, n: int) -> List[int]:
        def count_1s(n):
            temp = n
            count = 0
            while temp != 0:
                count += temp % 2
                temp = int(temp / 2)
            return count

        res = []
        for i in range(n + 1):
            res.append(count_1s(i))
        return res
