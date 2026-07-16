class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        l=0
        r=round(c**0.5)
        while l<=r:
            mid= l**2 + r**2
            if mid==c:
                return True
            elif mid < c:
                l+=1
            else:
                r-=1
        return False
