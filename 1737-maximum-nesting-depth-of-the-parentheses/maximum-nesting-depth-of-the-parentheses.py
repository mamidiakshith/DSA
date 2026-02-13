class Solution:
    def maxDepth(self, s: str) -> int:
        c=mc=0
        for i in s:
            if i=='(':
                c+=1
                mc=max(mc,c)
            elif i==')':
                c-=1   
        return mc
            
