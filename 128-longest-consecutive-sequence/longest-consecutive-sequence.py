class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        s=sorted(set(nums))
        c=ms=0
        if len(s)>1:
            for i in range(1,len(s)):
                if s[i]-s[i-1]==1:
                    c+=1
                else:
                    c=0
                ms=max(ms,c)

        else:
            return len(s)
        return ms+1

        