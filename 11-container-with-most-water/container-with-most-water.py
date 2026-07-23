class Solution:
    def maxArea(self, height: List[int]) -> int:
        l=0
        r=len(height)-1
        le=b=0
        maxi=-float('inf')
        while l<=r:
            le=min(height[l],height[r])
            b=r-l
            maxi=max(maxi,le*b)
            if height[l]<=height[r]:
                l+=1
            else:
                r-=1
        return maxi


