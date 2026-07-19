class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        mp=p=0
        minp=float('inf')
        for i in prices:
            minp=min(minp,i)
            p= i-minp
            mp=max(mp,p)
        return mp