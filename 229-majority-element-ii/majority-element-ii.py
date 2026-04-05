class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        m={}
        a=[]
        for i in nums:
            m[i]=m.get(i,0)+1
        for i,j in m.items():
            if j> len(nums)//3:
                a.append(i)
        return a