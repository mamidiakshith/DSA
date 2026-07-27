class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        m={}
        for i in nums:
            m[i]=m.get(i,0)+1
        for i,j in m.items():
            if j > len(nums)//2:
                return i
        return -1