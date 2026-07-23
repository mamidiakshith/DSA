class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        a=[]
        for i in nums1:
            idx=nums2.index(i)
            found=-1
            for j in range(idx,len(nums2)):
                if nums2[j]>i:
                    found=nums2[j]
                    break
            a.append(found)
        return a
