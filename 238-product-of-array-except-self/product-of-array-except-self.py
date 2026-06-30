class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prefix=[]
        suffix=[]
        p=1
        for i in nums:
            p*=i
            prefix.append(p)
        s=1
        for i in range(len(nums)-1,-1,-1):
            s*=nums[i]
            suffix.append(s)
        suffix=suffix[::-1]
        res=[0]*len(nums)
        for i in range(len(nums)):
            if i-1<0:
                res[i]=1*suffix[i+1]
            elif i+1>=len(nums):
                res[i]=1*prefix[i-1]
            else:
                res[i]=prefix[i-1]*suffix[i+1]
            
        return res
