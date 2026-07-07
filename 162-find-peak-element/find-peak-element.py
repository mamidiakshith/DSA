class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        ans=-1
        n=len(nums)
        if n==1:
            return 0
        if nums[0]>nums[1]:
            return 0
        if nums[n-1]>nums[n-2]:
            return n-1
        for j in range(1,len(nums)-1):
            if nums[j]>nums[j-1] and nums[j]>nums[j+1]:
                return j
        return 0