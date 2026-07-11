class Solution:
    def separateDigits(self, nums: List[int]) -> List[int]:
        a=[]
        k=0
        for i in nums:
           for j in str(i):
            a.append(int(j))
        return a