class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        pre=[]
        suf=[]
        p=s=1
        for i in range(len(nums)):
            p*=nums[i]
            pre.append(p)
        for i in range(len(nums)-1,-1,-1):
            s*=nums[i]
            suf.append(s)
        suf=suf[::-1]
        res=[0]*len(nums)
        for i in range(len(nums)):
            if i-1<0:
                res[i]=suf[i+1]
            elif i+1>=len(nums):
                res[i]=pre[i-1]
            else:
                res[i]=pre[i-1]*suf[i+1]
        return res


        
            
