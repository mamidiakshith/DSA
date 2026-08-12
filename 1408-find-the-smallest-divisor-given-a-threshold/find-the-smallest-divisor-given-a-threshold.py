class Solution:
    def smallestDivisor(self, nums: List[int], threshold: int) -> int:
        l=1
        r=max(nums)
        m=float('inf')
        while l<=r:
            mid= l+ (r-l)//2
            ds=0
            for i in nums:
                ds+= (i+mid-1)//mid
            if ds<=threshold:
                m=min(m,mid)
                r=mid-1
            else:
                l=mid+1
        return m
