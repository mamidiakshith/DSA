class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        c=mc=0
        for i in nums:
            if i==1:
                c+=1
            else:
                c=0
            mc=max(mc,c)
        return mc