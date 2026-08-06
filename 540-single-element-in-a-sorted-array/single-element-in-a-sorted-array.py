class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        l=0
        for i in nums:
            l^=i
        return l