class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minp=float('inf')
        p=mp=0
        for i in prices:
            minp=min(minp,i)
            p=i-minp
            mp=max(mp,p)
        return mp