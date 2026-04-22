class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        m = prices[0]
        profit = 0
        max_profit = 0
        for each in prices:
            m = min(m, each)
            profit = each - m
            max_profit = max(profit, max_profit)
        return max_profit
