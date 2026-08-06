class Solution:
    def sortColors(self, nums: List[int]) -> None:
        for i in range(len(nums)):
            mini=i
            vis=False
            for j in range(i+1,len(nums)):
                if nums[mini]>nums[j]:
                    mini=j
                    vis=True
            if vis:
                nums[i],nums[mini]=nums[mini],nums[i]
        
        