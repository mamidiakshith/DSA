class Solution:
    def uniqueXorTriplets(self, nums: List[int]) -> int:
        n=len(nums)
        if n==1:
            return 1
        if n==2:
            return 2
        bits=0
        while (1<<bits) <= n:
            bits+=1
        return 1<<bits