from collections import Counter
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        m=Counter(nums)
        return [x for x,freq in m.most_common(k)]


        