from itertools import zip_longest
class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        g.sort()
        s.sort()
        l=r=c=0
        while l<len(g) and r<len(s):
            if g[l]<=s[r]:
                c+=1
                l+=1
                r+=1
            else:
                r+=1
        return c




        