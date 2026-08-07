class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        s=0
        ms=nums[0]
        for i in nums:
            s+=i
            ms=max(ms,s)
            if s<0:
                s=0
        return ms