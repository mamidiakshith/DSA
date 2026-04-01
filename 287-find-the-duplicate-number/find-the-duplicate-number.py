class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        mask=0
        for i in nums:
            x= 1<<i
            if mask &x:
                return i
            else:
                mask|=x
        return -1
       
