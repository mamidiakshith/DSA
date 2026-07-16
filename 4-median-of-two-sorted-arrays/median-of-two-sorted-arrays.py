class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        i=j=0
        a=[0]*(len(nums1)+len(nums2))
        k=0
        while i<len(nums1) and j<len(nums2):
            if nums1[i]<=nums2[j]:
                a[k]=nums1[i]
                i+=1
                k+=1
            else:
                a[k]=nums2[j]
                j+=1
                k+=1
        while i<len(nums1):
            a[k]=nums1[i]
            k+=1
            i+=1
        while j<len(nums2):
            a[k]=nums2[j]
            k+=1
            j+=1
        m=0
        n=len(a)
        if(n%2==0):
            m= (a[n//2 -1]+ a[n//2] )/2
        else:
            m= a[n//2]
        return m


