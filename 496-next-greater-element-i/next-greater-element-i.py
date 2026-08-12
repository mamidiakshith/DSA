class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        a=[]
        for i in nums1:
            idx=nums2.index(i)
            flag=False
            for j in range(idx+1,len(nums2)):
                if nums2[j]>i:
                    flag=True
                    a.append(nums2[j])
                    break
            if not flag:
                a.append(-1)
        return a
