from collections import Counter
class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        c=Counter(nums)
        m=max(c.values())
        a=0
        for i in c.values():
            if i ==m:
                a+=1
        return a*m

        