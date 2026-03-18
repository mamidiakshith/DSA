class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        prefix=[]
        suffix=[]
        s=0
        for i in range(len(nums)):
            s+= nums[i]
            prefix.append(s)
        s=0
        for i in range(len(nums)-1,-1,-1):
            s+=nums[i]
            suffix.append(s)
        suffix=suffix[::-1]
        for i in range(len(nums)):
           l=prefix[i]-nums[i]
           r=suffix[i]-nums[i]
           if l==r:
            return i
        return -1
        