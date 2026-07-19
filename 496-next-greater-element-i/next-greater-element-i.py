class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        a=[]
        for i in range(len(nums1)):
            flag=-1
            x=nums2.index(nums1[i])
            for j in range(x+1,len(nums2)):
                if nums2[j]>nums1[i]:
                    flag=nums2[j]
                    break
            a.append(flag)
        return a
        
            


