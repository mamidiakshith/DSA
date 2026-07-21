class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        n=nums1+nums2
        n.sort()
        a=len(n)
        if len(n)%2==0:
            return (n[a//2]+n[a//2 -1])/2
        else:
            return n[a//2]