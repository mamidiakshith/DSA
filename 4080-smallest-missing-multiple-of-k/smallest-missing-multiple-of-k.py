class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        for i in range(1,101):
            x=k*i
            if x not in nums:
                return x
        return 101

        