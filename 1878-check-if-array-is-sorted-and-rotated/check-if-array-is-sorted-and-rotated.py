class Solution:
    def check(self, nums: List[int]) -> bool:
        j=0
        for i in range(len(nums)-1):
            if nums[i]>nums[i+1]:
                j+=1
        if nums[-1]>nums[0]:
            j+=1
        return j<=1