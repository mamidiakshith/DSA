class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        s=sorted(set(nums))
        if len(s)<1:
            return len(s)
        c=mc=0
        for i in range(1,len(s)):
            if s[i]-s[i-1]==1:
                c+=1
            else:
                c=0
            mc=max(mc,c)
        return mc+1

        

        