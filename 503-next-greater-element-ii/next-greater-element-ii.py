class Solution:
    def nextGreaterElements(self, nums: List[int]) -> List[int]:
        nums=nums+nums
        a=[]
        for i in range(len(nums)//2):
            found=-1
            for j in range(i+1,len(nums)):
                if nums[j]>nums[i]:
                    found=0
                    a.append(nums[j])
                    break
            if(found==-1):
                a.append(-1)
        return a
