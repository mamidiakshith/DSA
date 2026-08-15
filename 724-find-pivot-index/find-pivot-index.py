class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        ts=0
        for i in nums:
            ts+=i
        ls=0
        for idx,i in enumerate(nums):
            rs=ts-ls-i
            if ls==rs:
                return idx
            ls+=i
        return -1
        