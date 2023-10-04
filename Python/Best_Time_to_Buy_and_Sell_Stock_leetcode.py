# Question link - https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
# Answer by ksauraj

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        i=prices.index(min(prices))
        p_trim_l = prices[0 : i]
        p_trim_r = prices[i : None]
        ls = []
        ls.append(max(p_trim_r) - min(p_trim_r))
        while max(p_trim_l, default=None) != None :
            i=prices.index(min(prices))
            p_trim_l = prices[0 : i]
            p_trim_r = prices[i : None]
            ls.append(max(p_trim_r) - min(p_trim_r))
            del ls[ls.index(min(ls))]
            prices = p_trim_l.copy()

        return max(ls, default=0)

