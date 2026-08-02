class Solution:
    def maxArea(self, height: List[int]) -> int:
        l=0
        r=len(height)-1
        ml=0
        while l<=r:
            le=min(height[l],height[r])
            b=r-l
            ml=max(ml,le*b)
            if height[l]<height[r]:
                l+=1
            else:
                r-=1
        return ml

