class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        l=1
        r=max(piles)
        ans=float('inf')
        while l<=r:
            mid= l+ (r-l)//2
            k=mid
            t=0
            for i in piles:
                t+= (i+k-1)//k
            if t<=h:
                ans=min(ans,k)
                r=mid-1
            else:
                l=mid+1
        return ans
            
            

            


            
